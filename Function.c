#include <stdio.h>
int c;

 
     int adding(int a,int b){
     //function decloration 
     c=a+b;
     return c;
 }
 int main()
 {
     int result = adding(7,8);//function call
     printf("result is:%d",c);
 }
