#include <stdio.h>
int main()
{
    int n,a=0, b=1, c, sum=0;
    printf("enter no.of terms:");
    scanf("%d",&n);
    
    printf("fibonacci series is \t");
    for(int i=0;i<=n;i++)
        
    {
        printf("%d, ",a);
        sum=sum+a;
        c=a+b;
        a=b;
        b=c;
    }
        printf("\n%d", sum);
    
           return 0;
}
