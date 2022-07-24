#include<stdio.h>
void main()
{
struct student
{
int rollno;
char name[20];
float marks;
}s[10],s1[10],temp;
FILE *fp1,*fp2;
fp1=fopen("MARK.DAT","w");
int n,i,j;
printf("\n Enter the no.of students");
 scanf("%d",&n);
printf("\n Enter the details");
for(i=0;i<n;i++)
{
printf("\nrollno");
scanf("%d",&s[i].rollno);
printf("\nname");
scanf("%s",s[i].name);
printf("\n marks");
scanf("%f",&s[i].marks);
 }
fwrite(&s,sizeof(s),1,fp1);
fclose(fp1);
fp1=fopen("MARK.DAT","r");
fp2=fopen("ASCEND.DAT","w");
fread(&s1,sizeof(s1),1,fp1);
for(i=0;i<n-1;i++)
for(j=0;j<n-i-1;j++)
{
if(s1[j].marks>s1[j+1].marks)
{
temp=s1[j];
s1[j]=s[j+1];
s[j+1]=temp;}}
fwrite(&s1,sizeof(s1),1,fp2);
fclose(fp1);
fclose(fp2);
fp2=fopen("ASCEND.DAT","r");
fread(&s1,sizeof(s1),1,fp2);
printf("\n\t\t\tSTUDENT DETAILS");
printf("\n\t\t\t_______________");
printf("\n\t\troll no\t name\t marks");
for(i=0;i<n;i++)
printf("\n\t\t%d\t %s\t %f",s1[i].rollno,s1[i].name,s1[i].marks);
fclose(fp2);
}
