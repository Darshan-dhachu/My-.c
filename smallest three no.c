// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the three vlue:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b&&a<=c)
    {
        printf("%d is smaller",a);
    }
    else if(b<=a&&b<=c)
    {
        printf("%d is samller",b);
    }
    else
    {
        printf("%d is smaller",c);
    }
}
