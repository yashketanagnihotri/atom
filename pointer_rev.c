#include<stdio.h>
#include<string.h>
void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
void main()
{
  int a,b;
  a=5;
  b=10;
  swap(&a,&b);
  printf("%d %d",a,b);
  return 0;
}
