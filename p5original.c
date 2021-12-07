#include <stdio.h>
int main()
{
  int a,b,c;
  printf("enter number a:");
  scanf("%d",&a);
  printf("enter number b:");
  scanf("%d",&b);
  printf("enter number c:");
  scanf("%d",&c);

  if(a>b && a>c)

    printf("a is largest");

 else if(b>a && b>c)

    printf("b is largest");

 else if(c>a && c>b)
    
    printf("c is largest");

else printf("no largest number found");

return 0;

}