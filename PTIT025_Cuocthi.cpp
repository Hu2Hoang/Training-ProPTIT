#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
char s1[20],s2=[20],s3[20];
int n;
int a[105][3];
int main(){
	scanf("%d",&n);
	scanf("%s%s%s",s1,s2,s3);
	fio(i,0,n){
		fio(j,0,3){
			scanf("%d",&a[i][j]);
		}
	}
	fio(i,0,3){
		fio(i,0,n)
	}
	return 0;
}