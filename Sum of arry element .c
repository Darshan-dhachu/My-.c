#include <stdio.h>

int main() {
    int n,arry[n],sum=0,i;
    printf("enter the arry element n:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arry[n]);
        sum+=arry[n];
    }
    printf("%d",sum);
}
