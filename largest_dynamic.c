#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    int max;
    printf("enter the number of elements");
    scanf("%d", &n);
    int *p;
    p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    max=*p;
    for(int i=0;i<n;i++)
    {
        if(*(p+i)>max)
          max=*(p+i);
    }
    printf("%d",max);
}
