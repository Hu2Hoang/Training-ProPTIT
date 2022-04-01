#include<stdio.h>
#include<math.h>
int max(int a,int b){
	if(a>b) return a;
	else return b;
}
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
long long res=0,cnt,temp=0,d=0;
int i,t,n;
long long a[100005];
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		fio(i,0,n){
			scanf("%lld",&a[i]);
			if(a[i]==0) d++;
		}
		res=0;cnt=1;
		for(i=1;i<n;i++){
			if(a[i]>a[i-1] && a[i-1]>0){
				cnt++;
			}else cnt=1;
			res=max(res,cnt);
		}
		if(d!=n) 
			printf("%lld\n",res);
		else printf("0");
	}
	res=0;d=0;
	return 0;
}