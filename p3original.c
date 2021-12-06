#include<stdio.h>
void input(inta,intb);
void add(int a,int b,int *sum);
void output(int a,int b,int sum);
int main()
{
  int num1,num2,in,sum,out;
  printf("enter the 2 numbers\n");
  scanf("%d %d",&num1,&num2);
  input(&num1,&num2,&in);
  printf("input numbers %d, %d\n",in);
  add(&num1,&num2,&sum);
  printf("addition of two numbers is=%d\n",sum);
  output(&num1,&num2,&out);
  printf("output numbers is=%d",out);
  return 0;
}
void input(int a,int b)
{
  int a,b;
}
void add(int a,int b,int*sum)
{
  sum=a+b;
}
void output(int a,int b,int*sum)
{
  return sum;
}