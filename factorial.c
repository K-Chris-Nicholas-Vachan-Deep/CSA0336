#include <stdio.h>
int main()
{
    int n,fact=1;
    printf("enter:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        fact*=i;
    }
printf("factorial of %d is %d",n,fact);
}


