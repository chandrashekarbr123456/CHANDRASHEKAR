#include <stdio.h>
int main()
{
    int i, fact = 1, num=5;
        if(num==0)
        {
            fact = 1;
        }
    else
    {
        for (i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
    }
    printf("Factorial of %d = %5d\n", num, fact);
    return 0;
}
