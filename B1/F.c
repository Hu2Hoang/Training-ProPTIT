#include <stdio.h>
int n,res=0;
long long phepnhan(long long A, long long B, long long M)
{
    if(B == 0)
        return 0;
    long long T = phepnhan(A, B / 2, M) % M;
    
    if(B%2!=0)
        return ((T + T) % M + A % M) % M;
    else
        return (T + T) % M;
}
long long mod1e7(long long A, long long B, long long M)  
{
    if (B == 0)
        return 1;
    int half = mod1e7(A, B / 2, M) % M;
    half = phepnhan(half, half, M);

    if (B%2!=0)
        return phepnhan(half, A, M);
    else
        return half;
}
int main(){
    scanf("%d",&n);
    res=mod1e7(2,n-1,1000000007);
    printf("%d",res);
    return 0;
}
