// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int year,leap;
    printf("enter the year");
    scanf("%d",&year);
    leap=(year%4==0 && year%100!=0)||(year%400==0);
    if(leap==1)
    {
        printf("%d is leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
}
