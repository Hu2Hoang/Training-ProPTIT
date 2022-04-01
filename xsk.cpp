#include<bits/stdc++.h>
using namespace std;
int scp[1000];
int res[1000];
int n3[1000];
int i,n;
void xoapt(int a[],int &n,int vtx){
	for (int i = vtx; i <=n; ++i)
	{
		a[i]=a[i+1];
	}
	n--;
}
void xsk(int a[],int &n){
	for (int i = 2; i <=n; ++i)
	{
		if(a[i]==0){
			xoapt(a,n,i);
			i--;
		}
	}
}
int main(){
	freopen("test.inp","r",stdin);
	freopen("test.out","w",stdout);
	for (int i = 0; i <=100; ++i)
	{
		scp[i]=i*i;
	}
	for (int i = 0; i <=100; ++i)
	{
		if((scp[i]-1)%3==0) res[i]=scp[i]-1;
	}
	int d=0;
	for (int i = 0; i <=100; ++i)
	{
		if(res[i]!=0) {
			n3[i]=res[i];	
		}
		if(res[i]==0) d++;
	}
	xsk(n3,n=100);
	int dem = 100 -d;
//	  for (int i = 0; i <=dem; ++i)
//	  {
//	  	cout<<n3[i]<<" ";
//	  }
	int T;
	int pt,sc;
	cin>>T;
	while(T--){
		cin>>pt>>sc;
		//cout<<n3[pt]<<endl;
		cout<<n3[pt]%sc<<endl;
	}
	return 0;
}
//0 3 15 24 48 63 99 120 168 195 