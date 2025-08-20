#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is greater\n",a);
    }
    else if(b>c && b>a)
    {
        printf("%d is greater\n",b);
    }
    else if(c>a && c>b)
    {
        printf("%d is greater\n",c);
    }
    else{
        printf("The numbers are equal.\n");
    }
    
    if(a<b && a<c)
    {
        printf("%d is smaller\n",a);
    }
    else if(b<c && b<a)
    {
        printf("%d is smaller\n",b);
    }
    else if(c<a && c<b)
    {
        printf("%d is smaller\n",c);
    }
    else{
        printf("The numbers are equal.\n");
    }

    if(a==b)
    {
        printf("%d and %d is equal.\n",a,b);
    }
    else if(b == c)
    {
        printf("%d and %d is equal.\n",b,c);
    }
    else if(a==c)
    {
        printf("%d and %d is equal.\n",a,c);
    }
    else{
        printf("No values are equal.");
    }
    return 0;
}