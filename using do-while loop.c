//The Sum of 10 natural numbers using do while loop
#include<stdio.h>
int main()
{
    int i = 1;
    int sum = 0;
    do{
        sum += i;
        i++;
    } while (i<=10);
    printf("The sum of 10 natural numbers is %d\n", sum);
}
