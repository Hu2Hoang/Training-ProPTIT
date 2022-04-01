#include <stdio.h>
int i,n,res=0,t;
int a[100005];
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
int check(int arr[],int n){
	int res=0;
	if(a[0]>1||a[n-1]<=0) return res=1;
	else {
		for(int i=0;i<n;i++){
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
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		quicksort(a,0,n-1);
	printf("%d\n",res);
	}
	
	
	//for(int i=0;i<n;i++) printf("%d ",a[i]);
	return 0;
}