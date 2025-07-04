#include <stdio.h>
#include <math.h>

int isPrime(int no)
{
    int i;
    if (no < 2)
        return 0;
        
    for (i = 2; i <= sqrt(no); i++)
    {
        if (no % i == 0)
            return 0;
    }
    return 1;
}

void main() {
    int n, a[100], prime[100], count = 0,i;

    printf("Enter array size =");
    scanf("%d", &n);

    printf("Enter array elements = \n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d",&a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
        {
            prime[count++] = a[i];
        }
    }  

    printf("\nArray of prime numbers:\n");
    for (i = 0; i < count; i++)
        printf("%d\t", prime[i]);  
}
