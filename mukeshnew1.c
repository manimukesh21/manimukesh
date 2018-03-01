
#include<stdio.h>
int main()
{
int i,n,rem=1,p;
scanf("%d",&n);
scanf("%d",&p);
for(i=0;i<p;i++)
{
rem=rem*n;
}
printf("%d",rem);
return 0;
}
