#include<stdio.h>
long long n;
long long i=2,j=0;
int res=0;
int main(){
    scanf("%lld",&n);
    if (n<2) printf("0");
    else
    {
        while (i<=n)
        {
            if (n%i==0)
            {
                if (i!=j) 
                {
                    res++;
                    j=i;
                }
                n=n/i; 
            }
            else 
                if (i%2==0) i++;
                else i+=2;       
        }
    }
    printf("%d",res);
} 
