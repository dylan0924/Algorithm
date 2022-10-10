//
// Created by changyu Lee on 2022/10/06.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int input[2000001] = {};
    int tmpnum;
    int result=0;
    int x,n,i;

    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &tmpnum);
        input[tmpnum] = 1;
    }
    scanf("%d", &x);

    for(i=1; i<x; i++){
        if(input[i]==1 && input[x-i] == 1){
            result++;
        }
    }

    printf("%d",result/2);

    return 0;
}