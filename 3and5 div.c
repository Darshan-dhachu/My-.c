A/ Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;
    printf("enter the value a:");
    scanf("%d",&a);
    if(a%3==0&&a%5==0)
    {
        printf("%d is divisible");
    }
    else
    {
        printf("%d is not divisible");
    }
}
