#include <stdio.h>
int main(){
    int x,y,temp;
    printf("enter the value of x and y:");
    scanf("%d%d",&x,&y);
    printf("before swaping:x=%d,y=%d\n",x,y);
    temp=x;
    x=y;
    y=temp;
    
    printf("after swaping:x=%d,y=%d\n",x,y);
    return 0;
}
