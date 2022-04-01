#include<iostream>
using namespace std;
long long mod=1e9+7;
long long luythua(long long a,long long b){
    if(b==0) return 1;
    long long t= luythua(a,b/2);
    t=t*t % mod;
    if(b%2==1) t=t*a %mod ;
    return t;
}
int main(){
    long long n;
    cin>>n;
    long long k=(-3*luythua(2,n+1))%mod+(5*luythua(3,n))%mod;
    k=k%mod;
    cout<<k;
}