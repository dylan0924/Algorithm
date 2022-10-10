//
// Created by changyu Lee on 2022/10/06.
//

#include <stdio.h>
#include <stdlib.h>

int calc_case(int* list, int answer, int start_index, int list_size);

int main(){
    int* list;  // list of numbers
    int n;      // size of list
    int x;      // summation result
    int i = 0;  // for iteration
    int result=0; // for result

    scanf("%d", &n);
    list = (int*)malloc(sizeof(int)*n);

    for(i=0; i<n; i++){
        scanf("%d", &(list[i]));
    }

    scanf("%d",&x);
    for(i=0; i<n-1; i++){
        result += calc_case(list, x,i, n);
    }

    printf("%d", result);
    free(list);
    return 0;
}

int calc_case(int* list, int answer ,int start_index, int list_size){
    int probability = 0;

    for(int j=start_index+1; j<list_size; j++){
        if(list[start_index]+list[j] == answer){
            probability++;
        }
    }
    return probability;
}