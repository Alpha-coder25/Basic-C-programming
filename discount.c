#include<stdio.h>
int main()
{
    double a;
    printf("Total purchase ammount: ");
    scanf("%lf",&a);

    if(a>= 500)
    {
        printf("You are getting 20%% discount:)\n");
        printf("New ammount to pay: %.2lf\n",a-(a*20)/100);
    }
    else if(a>=200 && a<=499)
    {
        printf("You are getting 10%% discount:)\n");
        printf("New ammount to pay: %.2lf\n",(a*10)/100);
    }
    else{
        printf("Sorry, you are not getting any discount\n Better buy next time.");
    }
    return 0;
}