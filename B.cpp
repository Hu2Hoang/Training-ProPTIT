#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)

int n;
int main(){
	scanf("%d",&n);
	if(n==1){
		float a1,b1;
		scanf("%f%f",&a1,&b1);
		if(a1==0){
			if(b1==0){
				printf("0\n");
			}
			printf("0");
		}
		else{
			float n1=(float)-b1/a1;
			if(n1=(int)n1){
				printf("1");
			}
			else printf("0");
		}
	}else if(n==2){
		int res2=0;
		float a2,b2,c2;
		for(long long i=-10000000;i<=10000000;i++){
			if((a2*pow(i,2)+b2*i+c2)==0) res2++;
		}
		printf("%d",res2);
	}
	else if(n==3){
		float a3,b3,c3,d3;
		int res=0;
		scanf("%f%f%f%f",&a3,&b3,&c3,&d3);
		for(long long i=-10000000;i<=10000000;i++){
			if((a3*pow(i,3)+b3*pow(i,2)+c3*i+d3)==0) res++;
		}
		printf("%d",res);
	}
	else if(n==4){
		float a4,b4,c4,d4,e4;
		int res=0;
		scanf("%f%f%f%f%f",&a4,&b4,&c4,&d4,&e4);
		for(long long i=-10000000;i<1000000;i++){
				if(a4*pow(i,4)+b4*pow(i,3)+pow(i,2)*c4+d4*i+e4==0) res++;

			}
			printf("%d",res);
	 }
	return 0;
}