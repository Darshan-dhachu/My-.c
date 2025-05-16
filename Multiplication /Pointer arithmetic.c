#include <stdio.h>

int main() {
    int arr[10]={1,2,3,4,5},i,*raj=arr;
    for(i=0;i<5;i++){
        printf("%d ",(*raj-i));
        printf("%p ",(raj-i));
    }
    
    

    return 0;
}
