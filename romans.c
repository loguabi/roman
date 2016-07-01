#include<stdio.h>
int main()
{
int a;
printf("Enter the roman numbers:\n");
scanf("%d",&a);
printf("\nnew:%c",a);

switch(a)
{
case 'I':
printf("1\n");
break;
case 'V':
printf("5\n");
break;
case 'X':
printf("\n10");
break;
case 'L':
printf("\n50");
break;
case 'C':
printf("\n100");
break;
case 'D':
printf("\n500");
break;
case 'M':
printf("\n1000");
break;
case '0':
printf("\n0");
break;
}

return 0;
}
