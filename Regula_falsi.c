#include<stdio.h>
#include<math.h>
float func(float);
int main()
{
    float x1,x2,x3,fx1,fx2,fx3;
    do
    {
        printf("\nEnter two initial value. ");
        scanf("%f%f",&x1,&x2);
        fx1=func(x1);
        fx2=func(x2);
    }while((fx1*fx2)>0);
    do
    {
        fx1=func(x1);
        fx2=func(x2);
        x3=(fx2*x1-fx1*x2)/(fx2-fx1);
        fx3=func(x3);
        if(fx3<0)
        {
            x1=x3;
        }
        else
        {
            x2=x3;
        }
    } while (fabs(x2-x1)>0.00001);
    printf("\nThe root is %f\n",x3);
}
float func(float x)
{
    return 3*x*x-8*x+2;
}