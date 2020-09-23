#include <stdio.h>

int main()
{
    float per;
    printf("Enter the percentage:");
    scanf("%f",&per);
    if((per>=80) && (per<=100))
        printf("A grade");

    else if((per<80) && (per>=70))
        printf("B grade");

    else if((per<70) && (per>=60))
        printf("C grade");

    else if((per<60) && (per>=45))
        printf("D grade");

    else if((per<45) && (per>=0))
        printf("FAIL");

    else
        printf("Enter valid percentage");

    return 0;
}
