#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
int m,n;
long long c1=1e18,c2=1e18;
int main(){
	scanf("%d%d",&m,&n);
	if(m%2==0 && n%2==0) printf("NO");
	else{
		if(m%2!=0) c1 = m*2+1;
		if(n%2!=0) c2 = n*2+1;
		if(c1<c2) printf("YES  %lld",c1);
		else printf("YES %lld",c2);
	}
	return 0;
}
