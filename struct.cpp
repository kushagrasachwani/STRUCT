
#include<stdio.h>
struct data
{
    char name[50];
    char address[50];int age;
};
int main()
{
    int i;
    struct data students[3];
    for(i=0;i<5;i++)
    {
        printf("Enter name of student %d    ",i+1);
        scanf("%s",&students[i].name);
        printf("Enter address of student %d    ",i+1);
        scanf("%s",&students[i].address);
        printf("Enter age of student %d    ",i+1);
        scanf("%d",&students[i].age);
        
    }
    printf("Name\tAddress\tAge\n");
    for(i=0;i<3;i++)
    {
    printf("%s\t%s\t%d\n",students[i].name,students[i].address,students[i].age);
    }
    
}
