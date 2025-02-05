#include <stdio.h>
int main()
{
    float height;
    printf("enter height \n");
    scanf("%f",&height);

    if(height<150.0)
    printf("dwarf\n");

    else if ((height>=150.0) && (height<=165.0))
    printf("average height \n");

    else if((height>165.0) && (height<=195.0))
    printf("taller\n");

    else
    printf("abnormal height");

    return 0;
}
