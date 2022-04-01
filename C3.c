#include <stdio.h>

int a[100005]={},b[100005]={};
int i,n,dem=0,res=0,maxx=0;
int max(int a,int b){
	if(a>b) return a;
	else return b;
}
void swap(int &a,int &b){
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}
void quicksort(int a[], int left, int right){
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
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++){
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
	for(int i=0;i<n;i++){
		res=max(res,b[i]);
	}
	printf("%d %d",res,maxx );
	dem=0;res=0;maxx=0;
	return 0;
}