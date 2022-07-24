#include<stdio.h>
 void main()
{
struct employee
{
int empno;
char name[30];
int salary;
}em[25],temp;
int n,i,j;
printf("\n Enter the number of employees:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("/*The details of emloyee*/");
printf("\nEnter the employee no:");
scanf("%d",&em[i].empno);
printf("Enter the name:");
scanf("%s",em[i].name);
printf("Enter the salary:");
scanf("%d",&em[i].salary);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<(n-i)-1;j++)
{
if(em[j].salary>em[j+1].salary)
{
temp=em[j];
em[j]=em[j+1];
em[j+1]=temp;
}
}
}
printf("\nBased on salary\n");
printf("\nemployeeno\t name\t salary\t");
for(i=0;i<n;i++)
{
printf("\n%d\t\t",em[i].empno);
printf("%s\t",em[i].name);
printf("%d\t",em[i].salary);
}
}
