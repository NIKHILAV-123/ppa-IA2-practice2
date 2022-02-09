#include<stdio.h>
int input_number()
{
  int a;
  printf("enter a composite number\n");
  scanf("%d",&a);
  return a;
  
}
int find_composite(int a,int n)
{
  int composite;
  composite = a,n;
  return composite;
  
}
void output(int a,int n,int composite)
{
  printf("find_composite of %d is %d\n",n,a);
  
}
int main()
{
  int n;
  a=input();
  n=find_composite(a,n);
  output(a,n,find_composite);
  return 0;
}