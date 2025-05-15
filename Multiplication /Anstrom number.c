#include <stdio.h>

int main() {
    int result=0,num,rem,original;
    printf("enter the n value:");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        rem=num%10;
        result=rem*rem*rem+result;
        num/=10;
    }
    if(result==original){
        printf("the number is anstrom");
    }
    else{
        printf("not anstrom");
    }
}
