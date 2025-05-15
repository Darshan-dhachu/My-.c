#include <stdio.h>
#include <string.h>
int main() {
    char name[15];
    printf("enter your name:");
    scanf("%s",&name);
    printf("your mane is:%s\n",name);
    int length=strlen(name);
    printf("%d\n",length);
    strcpy(name,"hemraj");
    int comparison=strcmp("darshan","hemraj");
    printf("%d\n", comparison);
    strcat(name,"coder");
    printf("%s\n",name);
}
