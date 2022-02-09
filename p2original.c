#include<stdio.h>
int input_side()
{
  int a;
  printf("enter a values\n");
  scanf("%d", &a);
  return a;
  
}
int check_scalene(int a,int b,int c)
{
  int g;
  if(a>b && a>c)
  {
    g=a;
  }
  else if(b>c)
  {
    g=b;
  }
  else
  {
    g=c;
  }
  return g;
}
void output(int g)
{
  printf("the three sides of the triangle are not equal to each other is: %d\n",g);
  
}
int main()
{
  int a,b,c,ga;
  a=input();
  b=input();
  c=input();
  ga=check_scalene(a,b,c);
  output(ga);
  return 0;
}