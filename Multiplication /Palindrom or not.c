#include <stdio.h>

int main() {
    int rev= 0,num,rem,original;
    printf("enter the n value:");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(rev==original){
        printf("the number is palindrom");
    }
    else{
        printf("not palindrom");
    }
}
