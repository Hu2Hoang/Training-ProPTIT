#include <stdio.h>

long long i,n;
int a[100005];
long long sum=0,res=0;
void swap(int &a1,int &b1){
	int tmp;
	tmp=a1;
	a1=b1;
	b1=tmp;
}


void quicksort(int a[], long long left, long long right){
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
	scanf("%lld",&n);
	for( i=1;i<=n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	quicksort(a,1,n);
	for(i=1;i<=n;i++){
		if(a[i]==i) res++;
	}
	if(res==n) printf("YES %lld",sum);
	else printf("NO");
	res=0;sum=0;i=0;n=0;
	return 0;
}