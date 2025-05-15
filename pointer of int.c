#include <stdio.h>

int main() {
    int x=10;
    int *ptr=&x;
    printf("before x=%d\n",x);
    *ptr=*ptr+5;
    printf("after x=%d",x);

    return 0;
}
