#include <bits/stdc++.h>
#define fio(i,a1,b1) for(int i=a1;i<=b1;i++)
using namespace std;
int t,n,i;
int a[100005];
int check(int arr[],int n){
	int res=0;
	if(a[1]>1||a[n]<=0) return res=1;
	else {
		fio(i,1,n){
		if(a[i]<=0){
			if(a[i+1]<=1) continue;
			else return res=1;
		}
		else if(a[i]+1<a[i+1])
			return res=a[i]+1;
		}
	}
}
int main(){
	//freopen("M3.inp","r",stdin);
	//freopen("M3.out","w",stdout);
	cin>>t;
	while(t--){
		cin>>n;
		fio(i,1,n){
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		cout<<check(a,n)<<"\n";
	}
	
	return 0;
}