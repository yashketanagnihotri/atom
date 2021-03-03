#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    int sum=0;
    printf("enter the number of elements");
    scanf("%d", &n);
    int *p;
    p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
        sum+=*(p+i);
    }
    printf("%d",sum);
}
