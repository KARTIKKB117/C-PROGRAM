
#include <stdio.h>

int main() {
    int number;                           //to check no. is +ve ,-ve,zero
    printf("Enter the number\n",number);
    scanf("%d",&number);
    if (number>0)
{
    printf("positive");
}
else if (number<0)
{
    printf("negative");
}
else{
    printf("it is a zero");
}
return 0;
}
