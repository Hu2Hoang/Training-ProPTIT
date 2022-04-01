#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<=b1;i++)
const int n=3;
long long a[3][3],i,j;
int main(){
	fio(i,1,n){
		fio(j,1,n){
			scanf("%lld",&a[i][j]);
		}
	}
	long long res=0;
	res=a[1][1]*a[2][2]*a[3][3]+a[3][1]*a[1][2]*a[2][3]+a[1][3]*a[3][2]*a[2][1] -(a[1][3]*a[2][2]*a[3][1]+a[3][3]*a[2][1]*a[1][2]+a[1][1]*a[3][2]*a[2][3]);
	printf("%lld",res);
	return 0;
}