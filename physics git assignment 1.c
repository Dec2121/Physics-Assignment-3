#include<stdio.h>
#include<math.h>
int main()
{
    int m;
    double lembda,a1,a2,a3,result_1,result_2,result_3;
    printf("Enter the value of lembda: ");
    scanf("%lf",&lembda);
    if(380 > lembda || 750 < lembda)
    {
        while(380 > lembda || 750 < lembda)
        {
            printf("Out of the range. Please enter a valid number:");
            scanf("%lf",&lembda);
        }
    }

    printf("Enter the value of m: ");
    scanf("%d",&m);

    printf("Enter all three value of a\n");
    scanf("%lf %lf %lf",&a1,&a2,&a3);

    lembda /= 1e9;
    a1 /= 1e6;
    a2 /= 1e6;
    a3 /= 1e6;

    result_1 = asin ((m*lembda) / a1);
    result_2 = asin ((m*lembda) / a2);
    result_3 = asin ((m*lembda) / a3);

    if(result_1 >= result_2 && result_1 >= result_3)
    {
        printf("This a = %lf will bent the light most.",a1);
    }
    else if(result_2 >= result_1 && result_2 >= result_3)
    {
        printf("This a = %lf will bent the light most.",a2);
    }
    else if(result_3 >= result_1 && result_3 >= result_2)
    {
        printf("This a = %lf will bent the light most.",a3);
    }
    return 0;

}
