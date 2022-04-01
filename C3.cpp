#include <bits/stdc++.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
using namespace std;
int i,n;
int a[100005],b[100005],dem=0,maxx=0,res=0;
int main(){
	cin>>n;
	fio(i,1,n){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	fio(i,1,n){
		dem=1;
		while(a[i]==a[i+1]){
			dem++;
			i++;
		}
		if(maxx<=dem){
			maxx=dem;
			b[i]=a[i];
		}
	}

	fio(i,1,n) res=max(res,b[i]);
	cout<<res<<' '<<maxx;
	return 0;
}