#include <stdio.h>
#include<conio.h>
int main()
{
 int n,i,j,temp;
 scanf("%d\n",&n);
 int a[n];
 for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)  
    {
        if(a[i]>a[j])
      {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       }
    }
}
i=n/2;
printf("%d",a[i]);
return 0;
}
    
