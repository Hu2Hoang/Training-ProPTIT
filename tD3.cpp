#include<bits/stdc++.h>
using namespace std;
int sapxep(int n)
{
	int a[100000],j=0,vt;
	int temp=n,res=0;
	while(abs(temp)>0)
	{
		a[j]=abs(temp)%10;
	    temp=abs(temp)/10;
		j++;
	}
	sort(a,a+j);
	if(n>0){
	for(int i=j-1;i>=0;i--)
	{
		res=res*10+a[i];
	}
	return res;
	}
	else
	{
		for(int i=0;i<j;i++)
		{
			if(a[i]>0)//-110 -> 0 1 1
			{
				res=res*10+a[i];
				vt=i;
				break;
			}
		}
		for(int i=0;i<j;i++)
		{
		if(i!=vt)
		res=res*10+a[i];
		}
	return -1*res;
  	}
}
int main()
{
	int n;
	int a[100002]={},b[100002]={};
// 	memset(a,0,sizeof(a));
// 	memset(b,0,sizeof(b));
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++)
	{
		b[i]=sapxep(a[i]);		
	}
	sort(b,b+n);
	for(int i=n-1;i>=0;i--){
		cout<<b[i]<<" ";
	}
}
