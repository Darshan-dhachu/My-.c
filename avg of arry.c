#include <stdio.h>
int n=10,i,sum=0;
int average()
{
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    int avg=sum/n;
    return avg;
}
int main() {
    printf("enter 10 element to arry:");
    int res=average();
    printf("avarage of all arry element is:%d",res);
    return 0;
}
