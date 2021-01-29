#include <stdio.h>
float main(void)
{
    float a,b,c;


    printf("ax^2+bx+c=0 \n  enter number:\n");
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    printf("panbieshi=%f \n",b*b-4*a*c);
    getchar();
    getchar();
    return 0;

}