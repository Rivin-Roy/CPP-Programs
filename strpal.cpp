#include<stdio.h>
void main()
{
int i,j,l=0,flag=1;
char str[50],temp[50];
printf(" Enter the string:\t");
gets(str);
for(i=0;str[i]!='\0';i++)
if(str[i]!=' ')
{
temp[j]=str[i];
 j++;
}
temp[j]='\0';
for(i=0;temp[i]!='\0';i++)
l=l+1;
for(i=0,j=l-1;i<l/2;i++,j--)
{
if(temp[i]!=temp[j])
{
flag=0;
break;
}
}
if(flag==0)
printf("String is not  palindrome\n");
else
printf(" String is  palindrome\n");
}
