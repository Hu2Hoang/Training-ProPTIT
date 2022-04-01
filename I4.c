#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
int i,n;
int a[100000],b[100000];
int main(){
	scanf("%d",&n);
	fio(i,0,n) scanf("%d",&a[i]);
	int res,dem,temp;
	res=1;dem=1,temp=1;
	fio(i,1,n){
		if(a[i]>a[i-1]) dem++;
		else dem=1;
		if(dem>res){
			res=dem;
			b[0]=i;temp=1;
		}
		//gia su lan 2
		else if(dem==res){
			b[temp]=i;++temp;
		}
	}
	printf("%d\n",res);
	for(int i=0;i<temp;i++){
		for(int j=0;j<res;j++){
			printf("%d ",a[b[i]-res+j+1]);
		}
		printf("\n");
	}
	return 0;
}