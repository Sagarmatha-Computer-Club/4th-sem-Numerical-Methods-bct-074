//Runge Kutta-4 Method

#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
    return (y-x)/(y+x);
}
int main()
{
    float x0,y0,k1,k2,k3,k4,h,xn;
    printf("Enter x0,y0,xn,h:");
    scanf("%f %f %f %f",&x0,&y0,&xn,&h);
    printf("\n\nX\t\tY\n");
    while(x0<=xn)
    {
        k1=f(x0,y0);
        k2=f((x0+h/2.0),(y0+k1*h/2.0));
        k3=f((x0+h/2.0),(y0+k2*h/2.0));
        k4=f((x0+h),(y0+k3*h));
        k=((k1+2*k2+2*k3+k4)/6);
        y0=y0+k*h;
        x0=x0+h;
        printf("%f\t%f\n",x0,y0);
    }
    return 0;
}
