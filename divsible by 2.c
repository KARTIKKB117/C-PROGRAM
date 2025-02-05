#include <stdio.h>
int main()
{
int num;
printf("Enter the number \n");
scanf ("%d",&num);
if (num == 0)
{
printf("%d divisible by 2\n",num);
}
else
{
printf("%d not divisible by 2\n",num);
}
return 0;
}
