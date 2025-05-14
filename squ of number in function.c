#include <stdio.h>
int squ;
int darsh(int a){
    squ=a*a;
    return squ;
}
int main(){
    darsh(9);
    printf("square:%d",squ);
}
