#include<stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    scanf("%d%f%lf",&a,&b,&c);
    printf("%d %f %lf %c",a,b,c,ch);
}

