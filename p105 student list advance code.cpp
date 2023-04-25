#include<stdio.h>
#include<string.h>

struct stu
{
	int stno;
	char stname[20];
	int steng;
	int sthin;
};
main()
{
	struct stu s[100];
	int i,n;
	printf("Enter the total number of students=");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the stno of student %d= ", i+1);
		scanf("%d", &s[i].stno);
		fflush(stdin);
		printf("\nEnter the name of the student= ");
		gets(s[i].stname);
		printf("\nMarks of student in english= ");
		scanf("%d", &s[i].steng);
		printf("\nMarks of student in hindi= ");
		scanf("%d", &s[i].sthin);
	}
	printf("\nSRno.\tNo\tName\tEnglish\tHindi");
	printf("\n=================================");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%d\t%d\t%d\t%d", i+1,s[i].stno,s[i].stname,s[i].steng,s[i].sthin);
	}
}
