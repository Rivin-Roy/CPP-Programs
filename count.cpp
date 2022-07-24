#include<stdio.h>
 void main()
 {
 char 
 char str[30],ch;
 int i,count=0;
 printf("Enter the string");
 gets(str);
 printf("\n Enter the character :");
 scanf("%c",&ch);
 for(i=0;str[i]!=’\0’;i++)
{
 if(str[i]==ch)
 count++;
 }
 printf(" The  occurrence is: %d",count);
 }
