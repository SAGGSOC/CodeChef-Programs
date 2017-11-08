#include<stdio.h>
#define AREA(x)(3.14*x*x)
int main()
{float r1=6.25,r2=2.5,a;
a=AREA(r1);
printf("Area of the circle is %f", a);
a=AREA(r2);
printf("Area of the circle is %f", a);
}
