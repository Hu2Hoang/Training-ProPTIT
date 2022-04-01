#include<stdio.h>
#include<math.h>
int main()
{
    long long n;
    long long chan=0, le=0;
    scanf("%lld", &n);
    long long b=0;
    while(n > 0)
    {
    	b = n%10;
    	{
    		if (b %2 ==0)
    			chan += b;
    		else
    			le += b;
		}
    	n = n/10;
	}
	printf("%lld %lld", chan, le);
	return 0;
}
