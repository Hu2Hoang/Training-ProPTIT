#include <stdio.h>
#include <string.h>
int i,n;
long long res=0,temp=0;
long long a[100005]={},b[100005]={};
void swap(long long &a,long long &b){
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}
void quicksort(long long a[], long long left, long long right){
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
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++){ 
		scanf("%lld",&a[i]);
	}
	quicksort(a,1,n);
	for(i=1;i<=n;i++){
		int dem=1;
		while(a[i]==a[i+1]){
			dem++;i++;
		}
		if(dem>=2) b[i]=dem;
	}
	for(int i=1;i<=n;i++){
		if(b[i]>=2){
			temp=(b[i]*(b[i]-1))/2;
			res+=temp;
		}
	}
	printf("%lld",res );
	res=0;i=0;n=0;
	return 0;
}