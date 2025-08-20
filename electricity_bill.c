#include<stdio.h>
int main()
{
    double units;
    scanf("%lf",&units);
    if(units<= 100)
    {
        printf("Electricity Bill: %.2lf Taka", units*1.50);
    }
    else if(units<=200)
    {
        units = units-100;
        printf("Electricity Bill: %.2lf Taka", (units*2.00)+150);
    }
    else if(units > 200)
    {
        units = units - 200;
        printf("Electricity Bill: %.2lf Taka", (units*3.00)+350);
    }
    return 0;
}