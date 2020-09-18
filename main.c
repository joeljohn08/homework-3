#include <stdio.h>
int digit_sum(int n);


int main()
{
    int num, sum;
    
    printf("Enter an int: ");
    scanf("%d", &num);
    
    sum = digit_sum(num);
    
    printf("sum of digits of %d is %d. \n", num, sum);
    
    return 0;
}


int digit_sum(int n)
{
    if(n == 0)
        return 0;
        
    return ((n % 10) + digit_sum(n / 10));
}