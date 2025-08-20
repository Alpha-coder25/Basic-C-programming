#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);

    if(m>=90 && m<=100)
    {
        printf("Your grade is A");
    }
    else if(m>=80 && m<=89)
    {
        printf("Your grade is B");
    }
    else if(m>=70 && m<=79)
    {
        printf("Your grade is C");
    }
    else if(m>=60 && m<=69)
    {
        printf("Your grade is D");
    }
    else if(m> 100 || m<0)
    {
        printf("Invalid input");
    }
    else{
        printf("Uhhh...Looks like you couldn't make it :( \n Better luck next time.");
    }
    return 0;
}