#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the composite numbers to be added\n");
  scanf("%d", &n);
  return n;
  
}
void input_array(int n, int a[n])
{
  printf("enter the composite values to be added\n");
  for(int i=0; i<n; i++)
    {
      scanf("%d", &a[i]);
    }
}
{
int sum_composite_numbers = 0;
for(int i=0; i<n; i++)
  {
    sum_composite+ = a[i];
  }
return sum_composite;
}
void output(int n,int a[n],int sum_composite)
{
  for(int i=0; i<n-1; i++)
    {
      printf("%d+", a[i]);
    }
  printf("%d=%d\n", a[n-1],sum_composite);
}
int main()
{
  int a,c;
  a=input_array_size();
    int b[a];
  input_array(a,b);
  c=sum_n_arrays(a,b);
  output(a,b,c);
  return 0;
}
  

