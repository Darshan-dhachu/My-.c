#include <stdio.h>
int largest;
int findlargest(int a,int b,int c){
    if(a>b&&a>c){
        largest=a;
    }
    else if(b>a&&b>c){
        largest=b;
    }
    else{
        largest=c;
    }
    return largest;
}
int main(){
    findlargest(1,2,3);
    printf("the largest number is:%d\n",largest);
 } 
