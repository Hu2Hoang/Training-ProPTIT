#include <bits/stdc++.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
using namespace std;
long long t,x,k,n,sum=0,temp=0;
long long i,a[10005]={0};
int main(){
	cin>>t;
	while(t--){
		cin>>x>>k>>n;
		memset(a,0,sizeof(a));
		fio(i,1,n){
			cin>>a[i];
			sum+=a[i];
		}
		temp=sum+x;
		if(temp>k) cout<<"YES";
		else cout<<"NO";
		sum=0;temp=0;x=0;
	}
	return 0;
}