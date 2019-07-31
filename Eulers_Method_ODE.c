//Euler's method

#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
    return (y-x)/(y+x);
}
int main()
{
    float x0,y0,h,xn;
    printf("Enter x0,y0,xn,h:");
    scanf("%f %f %f %f",&x0,&y0,&xn,&h);
    printf("\n\nX\t\tY\n");
    while(x0<=xn)
    {
        y0=y0+h*f(x0,y0);
        x0=x0+h;
        printf("%f\t%f\n",x0,y0);
    }
    return 0;
}
