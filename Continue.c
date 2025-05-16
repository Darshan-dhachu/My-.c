online
#include <stdio.h>

int main() {
    int n,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        if(i==n)
            continue;
            printf("%d",i);
    }
    return 0;
}
