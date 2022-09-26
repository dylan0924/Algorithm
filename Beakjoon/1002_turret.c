//
// Created by changyu Lee on 2022/09/23.
//

#include <stdio.h>
#include <math.h>

int case_calculator(int *x, int *y, int *r);
double distance_calculator(int x1, int y1, int x2, int y2);
int abs_radius(int x, int y);

int main(void){
    int t = 0; // total number of test case
    int x[2];
    int y[2];
    int r[2];

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d %d %d %d %d %d", x, y, r, x+1, y+1, r+1);
        printf("%d\n", case_calculator(x, y, r));
    }
    return 0;
}

int case_calculator(int *x, int *y, int *r){
    int result = 0;
    double distance = distance_calculator(x[0], y[0], x[1], y[1]);

    if(distance == 0 && r[0]==r[1]){
        result = -1;
    }
    else if(distance == r[0]+r[1] || distance == abs_radius(r[0], r[1])){
        result = 1;
    }
    else if(distance > r[0]+r[1] || distance < abs_radius(r[0], r[1])){
        result = 0;
    }
    else if(distance < (r[0]+r[1])){
        result = 2;
    }

    return result;
}

double distance_calculator(int x1, int y1, int x2, int y2){
    double distance = 0;

    distance = sqrt(pow(x1-x2, 2.0) + pow(y1-y2, 2.0));
    //printf("distance : %f\n",distance);
    return distance;
}

int abs_radius(int x, int y){
    if(x > y) return x-y;
    else if(y > x) return y-x;
    else if (x == y) return 0;

    return -1;
}