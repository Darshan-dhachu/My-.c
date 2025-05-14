// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char ch;
    printf("enter the charecter:");
    scanf("%C",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("%c is a vowel\n");
    }
    else
    {
        printf("%c is not a vowel\n");
    }
}
