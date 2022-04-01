#include <bits/stdc++.h>
#define fio(i,a,b) for(i=a;i<=b;i++)
using namespace std;
int n,i,k,res=0;
int a[101];
int main(){
	cin>>n>>k;
	fio(i,1,n) cin>>a[i];
	fio(i,1,n){
		if(a[i]%k==0) res++;
	}
	cout<<res;
	return 0;
}