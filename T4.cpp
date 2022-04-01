#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int b,p;
long long res=0,temp;
int main(){
	w(t){
		scanf("%d%d",&b,&p);
		if(p==0) printf("0");
		else{
			long long tmp=b/p;
		for(long long i=1;i<p;i++){
			if((i*i)%p==1){
				temp=i+p*tmp;
				if(temp>b) temp=temp-p; // 1 5 -< -6
				res+=((temp-i)/p+1); 
			}
		}
		printf("%lld \n",res );
		}
		res=0;
	}	
	
	return 0;
}
// 20 8
//1 3 5 7 9 11 13 15 17 19
