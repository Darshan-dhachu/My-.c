#include <stdio.h>
int n,size;
int evenarry(int arr[],int size){
    printf("even elements of arry:");
    for(int i=0;i<n;i++)
        if(arr[i]%2==0)
            printf("%d  ", arr[i]);
}
int main() {
   printf("enter the size of arry:");
   scanf("%d",&n);
   int arr[n];
   printf("enter the elements of arry:");
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   evenarry(arr,n);
   return 0;
}
