#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
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
int a[100005],res=2e9+1,n,i;
int main(){
	w(t){
		scanf("%d",&n);
		fio(i,0,n) scanf("%d",&a[i]);
		quicksort(a,0,n-1);
		int cnt=0;
		fio(i,0,n-1){
			if(a[i+1]-a[i] < res){
				res=a[i+1]-a[i];cnt=1;
			}
			else if(a[i+1]-a[i]==res) cnt++;
		}
	printf("%d %d\n",res,cnt );
	}
	return 0;
}