#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
long long a,b,c,sum,temp;
int main(){
	w(t){
		//int a,b,c,sum,temp;
		scanf("%lld%lld%lld",&a,&b,&c);
		//sum=a+b+c;
		
		if (a>b)
		{
			temp=a;a=b;b=temp;
		}
		if(a>c){ temp=a;a=c;c=temp;}
		if(b>c){temp=b;b=c;c=temp;}
		//printf("%lld %lld %lld\n",a,b,c);
		if(b+a>=c){
			sum=a+b+c;
			if(sum%2==0) printf("%lld\n",sum/2);
			else printf("%lld\n",(sum-1)/2);
		}
		if(b+a<c) printf("%lld\n",b+a);
		a=b=c=0;
	}
	return 0;
}

