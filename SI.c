#include <stdio.h>
int main() {
    int t,p,r,si;
    printf("enter the time t:");
    scanf("%d",&t);
    printf("enter the amount p: ");
    scanf("%d",&p);
    printf("enter the interest r: ");
    scanf("%d",&r);
    si = (p*t*r/100);
    printf("simple interest is %d",si);
    return 0;
}
