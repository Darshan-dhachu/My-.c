#include <stdio.h>
int fact=1;
int darsh(int n,int i){
    if(n==0){
        printf("1");
    }
    else if(n<0){
        printf("enter the positive value");
    }
    else{
        for(i=1;i<=n;i++){
            fact*=i;
        }
        printf("factorial of %d is:%d",n,fact);
    }
    return fact;
}
int main() {
    darsh(5,1);
    return 0;
    
}
