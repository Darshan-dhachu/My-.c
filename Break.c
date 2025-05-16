#include <stdio.h>

int main() {
    int n,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==5)
            break;
            printf("%d",i);
    }
    return 0;
}
