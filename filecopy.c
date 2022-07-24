#include<stdio.h>
void main()
{
FILE *p1,*p2;
char st[30];
p1=fopen("src.txt","w");
p2=fopen("dest.txt","w");
printf("Enter a string:");
gets(st);
fputs(st,p1);
printf("Contents of source file is:");
puts(st);
fclose(p1);
p1=fopen("src.txt","r");
p2=fopen("dest.txt","w");
fgets(st,30,p1);
fputs(st,p2);
printf("Contents of destination file is:");
puts(st);
fcloseall();
}
