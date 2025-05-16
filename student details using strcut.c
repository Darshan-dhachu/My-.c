// Online C compiler to run C program online
#include <stdio.h>
struct student{
    char name[20];
    int marks;
    int USN;
};
int main() {
  int i;
  struct student s[20];
  printf("enter student details here\n");
  for(i=0;i<5;i++){
      printf(" enter student %d name:",i+1);
      scanf("%s",&s[i].name);
      printf("entre student %d USN:",i+1);
      scanf("%d",&s[i].USN);
      printf("enter student %d marks:",i+1);
      scanf("%d",&s[i].marks);
  }
  printf("==========================================");
  printf("%-25s %-20d %-20d\n","NAME","usn","MARKS");
  printf("------------------------------------------");
for(i=0;i<5;i++){
    printf("%-25s %-20d %-20d\n",s[i].name,s[i].USN,s[i].marks);
}
    return 0;
}
