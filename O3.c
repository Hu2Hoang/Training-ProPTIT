#include <stdio.h>
#include <string.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
int i,n,t,dem;
long long res=0,temp;
long long a[100005]={};
long long b[100005]={};
void swap(long long &a,long long &b){
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}
void quicksort( long long a[], long long left, long long right){
	int l=left,r=right;
	int key=a[(l+r)/2];

	while(l<=r){
		while(a[l]<key) l++;
		while(a[r]>key) r--;
		if(l<=r){
			swap(a[l],a[r]);
			l++;r--;
		}
	}
	if(left<r) quicksort(a,left,r);
	if(l<right) quicksort(a,l,right);
}
int main(){
	scanf("%d",&t);
while(t--){
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(int i=0;i<n;i++) scanf("%lld",&a[i]);
	quicksort(a,0,n-1);
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
