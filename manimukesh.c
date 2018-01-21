#include<stdio.h>
void main()
{
  int a;
  printf("Enter the number");
  scanf("\n%d",&a);
  if(a<0)
  {
  printf("\nGiven number is negative");
  }
  else if(a>0)
  {
  printf("\nGiven number is positive");
  }
  else
  {
  printf("\nGiven number is zero");
  }
 }
