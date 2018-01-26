#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the value\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
printf("\na is largest value");
}else if(b>c)
{
printf("\nb is largest value");
}else
{
printf("\nc is largest value");
}
}
