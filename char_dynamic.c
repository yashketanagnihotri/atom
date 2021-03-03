#include<stdio.h>
#include<stdlib.h>
void main()
{
    char *p;
    p=(char *)calloc(50,1);
    gets(p);
    char a;
    printf("enter the char to be removed");
    scanf("%c",&a);
    char c;
    for(int i=0;*(p+i);i++)
    {
        if((*(p+i))==a)
        {
             c=*(p+i+1);
            *(p+i+1)='\b';
            //*(p+i+1)=c;
        }

    }
    puts(p);
}
