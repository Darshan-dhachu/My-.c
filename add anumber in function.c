#include <stdio.h>
int sum;
int darsh(int a,int b){
    sum=a+b;
    return sum;
}
int main(){
    darsh(9,5);
    printf("sum:%d",sum);
}
