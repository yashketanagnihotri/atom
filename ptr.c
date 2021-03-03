#include<stdio.h>
char *prin(char *a)
{
  return a;
}
void main()
{
  char a[10]="yash";
  char *p;
  p=a;
  printf("%s",prin(a));
}
