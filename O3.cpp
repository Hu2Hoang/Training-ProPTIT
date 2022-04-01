#include <bits/stdc++.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
using namespace std;
int i,n,t,dem;
long long res=0,temp;
long long a[100005]={};
long long b[100005]={};
int main(){
	//freopen("cout1e.inp","r",stdin);
	cin>>t;
while(t--){
	cin>>n;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++){
		dem=1;
		while(a[i]==a[i+1]){
			dem++;i++;
		}
		if(dem>=2){
			b[i]=dem;
		}
	}
	for(int i=0;i<n;i++){
		if(b[i]>=2){
			temp=(b[i]*(b[i]-1))/2;
			res+=temp;
		}
	}
	printf("%lld\n",res);
	res=0;
}
	
	//fio(i,1,n) cout<<a[i]<<' '<<b[i]<<"\n";
	return 0;
}
