// Online C compiler to run C program online
#include <stdio.h>
struct book{
    char name[20];
    int edition;
    char genre[20];
    char auther[20];
};
int main() {
    int i;
    struct book b[20];
    for(i=0;i<5;i++){
        printf("enter details for book%d\n",i+1);
        printf("enter the book name:");
        scanf("%s",&b[i].name);
        printf("enter auther of book:");
        scanf("%s",&b[i].auther);
        printf("enter the edition:");
        scanf("%S",&b[i].edition);
        printf("enter book gnere:");
        scanf("%s",&b[i].genre);
    }
    printf("==============================================");
    printf("%-20s %-15s %-10d %-15s\n","book name","auther","edition","genre");
    printf("----------------------------------------------");
    for(i=0;i<5;i++)
    {
        printf("%-20s %-15s %-10d %-15s\n",b[i].name,b[i].auther,b[i].edition,b[i].genre);
    }
    return 0;
}
