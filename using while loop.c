//The Sum of 10 natural numbers using while loop
#include<stdio.h>
int main()
{
    int i = 1;
    int sum = 0;
    while (i<=10)
        {
         sum += i;
         i++;
        }
    printf("The sum of 10 natural number is %d\n", sum);
}
