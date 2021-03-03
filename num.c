#include<stdio.h>
#include<string.h>
  int a,rem,temp,rem2;
char str[50][15]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety","hundred"};
void num(int a)
{
  if(a<=20)
    puts(str[a]);
  else if(a>20&&a<30)
  {
    printf(str[20]);
    rem=a%10;
    printf(" ");
    printf("%s",str[rem]);
  }
  else if(a>=30&&a<40)
  {
    printf(str[21]);
    rem=a%10;
    printf(" ");
    printf("%s",str[rem]);
  }
  else if(a>=40&&a<50)
  {
    printf(str[22]);
    rem=a%10;
    printf(" ");
    printf("%s",str[rem]);
  }
  else if(a>=50&&a<60)
  {
    printf(str[23]);
    rem=a%10;
    printf(" ");
    printf("%s",str[rem]);
  }
  else if(a>=60&&a<70)
  {
    printf(str[24]);
    rem=a%10;
    printf(" ");
    printf("%s",str[rem]);
  }
  else if(a>=70&&a<80)
  {
    printf(str[25]);
    rem=a%10;
    printf(" ");
    printf("%s",str[rem]);
  }
  else if(a>=80&&a<90)
  {
    printf(str[26]);
    rem=a%10;
    printf(" ");
    printf("%s",str[rem]);
  }
  else if(a>=90&&a<100)
  {
    printf(str[27]);
    rem=a%10;
    printf(" ");
    printf("%s",str[rem]);
  }
}
void main()
{
  printf("enter the number between 0 and 999\n");
  scanf("%d", &a);
  if(a<100)
  num(a);
  else if(a>=100&&a<=999)
  {
    printf("%s",str[a/100]);
    printf(" ");
    printf(str[28]);
    printf(" and ");
    num(a%100);
  }
}
