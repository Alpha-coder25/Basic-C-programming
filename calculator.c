#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    
    scanf("%c%d%d",&ch,&a,&b);

    if(ch == '+')
    {
        printf("%d + %d = %d",a,b,a+b);
    }
    else if(ch == '-')
    {
        printf("%d - %d = %d",a,b,a-b);
    }
    else if(ch == '*')
    {
        printf("%d * %d = %d",a,b,a*b);
    }
    else if(ch == '/')
    {
        
        printf("%d / %d = %.2f",a,b,(float)a/b);
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}