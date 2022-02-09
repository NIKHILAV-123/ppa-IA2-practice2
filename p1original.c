#include<stdio.h>
void input(int *a, int *b)
{
  printf("enter a value for base and height\n");
  scanf("%d %d",a,b);
  
}
void find_area(int a, int b, int *area)
{
  *area = 1/2*a*b;
}
void output(int a, int b, int area)
{
  printf("area of 1/2 * %d * %d is %d\n",a,b,area);
  
}
int main()
{
  int a,b,area;
  input(&a,&b);
  find_area(a,b,&area);
  output(a,b,area);
  return 0;
  
}