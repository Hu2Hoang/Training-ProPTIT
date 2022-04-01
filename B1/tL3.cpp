#include <bits/stdc++.h>
#define fio(i,a,b) for(i=a;i<=b;i++)
using namespace std;
int n,i;
int a[10005];
int main(){
	cin>>n;
	fio(i,1,n){
		cin>>a[i];
	}
	int temp=INT_MIN,sum=0;
	fio(i,1,n){
		sum=max(a[i],sum+a[i]);
		temp=max(temp,sum);
	}
	cout<<temp;
	return 0;
}