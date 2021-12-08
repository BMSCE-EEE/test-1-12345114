#include <stdio.h>
int main()
{
  int n,sum=0,c,array[100];
  printf("enter the number you want to add:");
  scanf("%d",&n);
  printf("\n\nenter %dinteger \n\n",n);
  for (c=0; c<n; c++)
  {
    scanf("%d", &array[c]);
    sum+= array[c];
  }
  printf("\n\nsum =%d\n\n",sum);
  return 0;
} 