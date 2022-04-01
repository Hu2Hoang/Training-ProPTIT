#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
long long max(int a,int b){
	if(a>b) return a;
	else return b;
}
int n; long long sum=0,m1=-1e9;
int a[100005];	
int main(){
	scanf("%d",&n);
	fio(i,0,n){
		scanf("%d",&a[i]);
		sum+=a[i];
		m1=max(m1,a[i]);
	}
	if(n==1) printf("NO\n");
	else if(sum%2!=0) printf("NO");
	else if(sum-m1 < m1) printf("NO");
	else printf("YES");
	return 0;
}