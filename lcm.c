#include <stdio.h>
int lcm(int, int);
int main()
{
    int a, b, result;
    printf("Input first number:");
    scanf("%d",&a);
    printf("Input second number:");
    scanf("%d",&b);
    result = lcm(a, b);
    printf("The LCM of %d and %d is %d\n", a, b, result);
    return 0;
}
int lcm(int a, int b)
{ 
    static int  tem= 1;
    if (tem % a == 0 && tem % b == 0)
    {
        return tem;
    }
    tem++;
    lcm(a, b);
    return tem;
}
