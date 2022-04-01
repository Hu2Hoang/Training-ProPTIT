#include <stdio.h>
#include <math.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
int i,n;
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
int dns(int n){
	int a[100005];
	int temp=n,j=0,vt0,res=0;
	temp=abs(n);
	while(temp>0){
		a[j]=temp%10;
		temp/=10;
		j++;
	}
	quicksort(a,0,j-1);
	//n lon hon 0
	if(n>0){
		for(int i=j-1;i>=0;i--){
			res=res*10+a[i];
		}
		return res;
	}
	else{
		// -1100 -> 0 0 1 1; 
		for(int i=0;i<j;i++){
			if(a[i]>0){
				res=res*10+a[i];
				vt0=i;
				break;
			}
		}
		for(int i=0;i<j;i++){
			if(vt0!=i){
				res=res*10+a[i];
			}
		}
		return res*-1;
	}
}
int main(){
	int a[100005]={},b[100005]={};
	scanf("%d",&n);
	fio(i,0,n) scanf("%d",&a[i]);
	fio(i,0,n) b[i]=dns(a[i]);
	quicksort(b,0,n-1);
	for(int i=n-1;i>=0;i--) printf("%d ",b[i]);
	return 0;
}