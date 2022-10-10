//
// Created by changyu Lee on 2022/10/06.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int* list;  // list of numbers
    int n;      // size of list
    int x;      // summation result
    int i, j;  // for iteration
    int result=0; // for result

    scanf("%d", &n);
    list = (int*)malloc(sizeof(int)*n);

    for(i=0; i<n; i++){
        scanf("%d", &(list[i]));
    }

    scanf("%d",&x);
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(list[i]+list[j] == x){
                result++;
            }
        }
    }

    printf("%d", result);
    free(list);
    return 0;
}