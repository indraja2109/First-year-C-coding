#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum=0, rem;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n!=0);
    {
        rem=n%10;
        sum+=rem;
	n=n/10;
    }
    printf("Sum of digits= %d", sum);
    return 0;
}
