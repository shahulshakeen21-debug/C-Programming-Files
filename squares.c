#include <stdio.h>

int main()
{
    int x, n, i = 1,power=1;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter n: ");
    scanf("%d", &n);

start:
    if(i <= n)
    {

        power=power*i;
        if(i >= 2)
            printf("%d^%d = %d\n", x, i,power);

        i++;
        goto start;
    }

    return 0;
}

output:

Enter x: 2
Enter n: 4
2^2 = 4
2^3 = 8
2^4 = 16
