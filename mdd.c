#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
int i,n,max;
int a[10000],b[10000];
int main(){
	scanf("%d",&n);
	max=-1e9;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>max) max=a[i];
	}
	for(int i=0;i<n;i++){
		b[a[i]]++;
	}
	for(int i=0;i<=max;i++){
		if(b[i]!=0) printf("%d %d\n",i, b[i]);
	}
	return 0;
}