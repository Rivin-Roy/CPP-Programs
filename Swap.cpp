#include<stdio.h>
void main()
{
int *pa,*pb,a,b,temp;
pa=&a;
pb=&b;
printf("Enter the first number to be swaped,a=");
scanf("%d",pa);
printf("\nEnter the second number to be swaped,b=");
scanf("%d",pb);
temp=*pa;
*pa=*pb;	
*pb=temp;
printf("After swaping the values are:\na=%d\nb=%d\n",*pa,*pb);
 }
