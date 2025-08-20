#include<stdio.h>
int main()
{
    int a,b,sum,sub,mult;
    float div; 
    scanf("%d%d",&a,&b);

    sum = a+b;
    sub = a-b;
    div = (float)a/b;
    mult = a*b;
    if(sum>sub)
    {
        printf("The greater is sum: %d\n",sum);
    }
    else{
        printf("The greater is sub: %d\n",sub);
    }

    if(div<mult)
    {
        printf("The smaller is div: %f\n",div);
    }
    else{
        printf("The smaller is mult: %d\n",mult);
    }
    return 0;
}