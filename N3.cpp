#include <bits/stdc++.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
using namespace std;
long long i,n,t;
long long a[1000005],res[1000005];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		//long long a[n+5],res[n+5];
		memset(a,0,sizeof(a));
		memset(res,0,sizeof(res));
		fio(i,1,n) cin>>a[i];
		res[1]=a[1],res[2]=max(res[1],a[2]);
		fio(i,3,n) res[i]=max(res[i-2]+a[i],res[i-1]);
		cout<<res[n];
		res[i]={};n=0;
	}
	return 0;
}