#include <stdio.h>
#include <math.h>
int main()
{
    int m1=3,m2=2;
    double a,lembda_1=530,lembda_2=700,theta_1=65.0,theta_2,theta;
    lembda_1 /= 1e9, lembda_2 /= 1e9;
    a=((m1*lembda_1)/sin(theta_1*(M_PI/180)));
    theta=asin((m2*lembda_2)/a);
    theta_2=theta*(180/M_PI);
    printf("at %.2lf angle will the second-order bright spot be for red light\n",theta_2);
    return 0;
}

