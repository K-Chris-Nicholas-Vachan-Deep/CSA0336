#include <stdio.h>
int factorial(int n){
    
        if(n==0)
            return 1;
        else
            return(n*factorial(n-1));
    }
   
    int main()
    
    {
        int n,fact=1;
        printf("enter:");
        scanf("%d",&n);
        fact= factorial(n);
        printf("%d is factorial of %d",fact,n);
    }

