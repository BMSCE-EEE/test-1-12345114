#include <stdio.h>
float square_Root(float n)
{
  float a = n;
  float b = 1;
  float e = 0.000001;
  while (a-b>e)
  {
    a=(a+b)/2;
    b=n/a;
  }
  return a;
}
float main (void)
{
  float n=25;
  printf("Square root of %f is %f",n,square_Root(n));
  n=16;
  printf("\nSquare root of %f is %f",n,square_Root(n));
  return 0;
}