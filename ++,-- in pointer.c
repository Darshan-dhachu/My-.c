#include <stdio.h>
int main(){
    int i,arr[]={1,2,3,4,5};
    int *ptr=arr;
    printf("%d\n",*ptr);
    *ptr++;
    printf("%d\n",*ptr);
    *ptr--;
    printf("%d\n",*ptr);
    return 0;
}
