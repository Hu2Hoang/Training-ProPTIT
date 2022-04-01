#include <stdio.h>
#include<math.h>
//#define fio(i,a1,b1) for(i=a1;i<b1;i++)
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
int i,n,j,res=0;
int a[105];
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	i=0;
	while(i<n-1){
		if(abs(a[i+1] - a[i]) != 1){
			res++;
			i+=2;
		}else i+=1;
	}
	//for(int i=0;i<n;i++) printf("%d",a[i]);
	printf("%d",res);
	return 0;
}
//4 6 8 1 10 2
