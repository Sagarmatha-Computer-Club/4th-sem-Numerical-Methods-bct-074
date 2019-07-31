#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float x[100],y[100],sumx=0,sumx2=0,sumy=0,sumxy=0,b,a,A,Y;
int i,n;

printf("Enter n: ");
scanf("%d",&n);

printf("Enter the values:\n");
for(i=0;i<n;i++)
{
printf("Enter x[%d] and y[%d]: ",i,i);
scanf("%f %f",&x[i],&y[i]);
}

for(i=0;i<n;i++)
{
sumx=sumx+x[i];
Y = log(y[i]);
sumy=sumy+Y;
sumxy=sumxy+Y*x[i];
sumx2=sumx2+x[i]*x[i];
}

//f=ae^bx

b=(sumx*sumy-n*sumxy)/(sumx*sumx-n*sumx2);

A=(sumxy-b*sumx2)/(sumx);
a=exp(A);
printf("\nHence, the required eqn is y = %fe^(%fx)",a,b);
getch();
return 0;
}

