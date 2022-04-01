#include <bits/stdc++.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
using namespace std;
int i,n;
long long res=0;
long long a[100005];
long long b[100005];
int main(){
	//freopen("cout1e.inp","r",stdin);
	// cin>>t;
	// while(t--){}
	cin>>n;
	fio(i,1,n) cin>>a[i];
	sort(a+1,a+n+1);
	fio(i,1,n){
		int dem=1;
		while(a[i]==a[i+1]){
			dem++;i++;
		}
		if(dem>=2){
			b[i]=dem;
		}
	}
	fio(i,1,n){
		if(b[i]>=2){
			long long temp=(b[i]*(b[i]-1))/2;
			res+=temp;
		}
	}
	printf("%lld",res);
	//fio(i,1,n) cout<<a[i]<<' '<<b[i]<<"\n";
	return 0;
}