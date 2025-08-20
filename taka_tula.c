#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the withdrawal ammount: ");
    scanf("%d",&a);
    printf("Enter you account balance: ");
    scanf("%d",&b);

    if(a>b)
    {
        printf("Insufficient Funds");
    }
    else if(a<0)
    {
        printf("Invalid Ammount");
    }
    else{
        printf("Successfully deducted %d taka from your account.\n",a);
        printf("Your current account balance is %d taka:)",b-a);
    }
    printf("\n\nThank you for choosing unga-banga bank PLC");
    return 0;
}