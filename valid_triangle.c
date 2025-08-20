#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a+b+c == 180)
    {
        printf("The tirangle is valid");

    }
    else{
        printf("The triangle is invalid");
    }
    return 0;
}