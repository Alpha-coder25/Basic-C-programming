#include<stdio.h>
int main()
{
    int tmp;
    scanf("%d",&tmp);

    if(tmp>30)
    {
        printf("It's Hot");
    }
    else if(tmp>=20 && tmp<=30)
    {
        printf("It's warm");
    }
    else if(tmp<20)
    {
        printf("It's cold");
    }
    return 0;
}