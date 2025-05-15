#include <stdio.h>
int main(){
    int a=5;
    int *p=&a;
    *p=*p+10;
    printf("a=%d\n",a);
    printf("b=%d\n",*p);
}
