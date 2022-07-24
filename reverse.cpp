#include<stdio.h>
#include<string.h>
void main()
{
char st[15],tem,*end,*big;
int i,len=0;
printf("Enter the string:");
gets(st);
 for(i=0;st[i]!='\0';i++)
len++;
for(big=st,end=st+(len-1);big<st+(len/2);big++,end--)
{
tem=*big;
*big=*end;
*end=tem;
}
printf("\nThe reversed string is:");
for(i=0;i<len;i++)
printf("%c",*(st+i));
}
