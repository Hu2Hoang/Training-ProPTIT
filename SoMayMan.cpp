#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define minn(a,b) (((a)<(b))?(a):(b))
#define w(t) int t;scanf("%d",&t);while(t--)
int n,res4=1e9,res7;	
float d4,d7;
int main(){
	w(t){
		scanf("%d",&n);
		for(int i=0;i<=n;i++){
			d4=(n-7*i)/4;d7=(n-4*d4)/7;
			if(d4==(int)d4 && d7==(int)d7 && d4 >=0 && d7 >=0){
				res4=minn(d4,res4);
				res7=d7;
			}
		}
		if(4*res4 + 7*res7 != n) printf("-1");
		else{
			for(int i=1;i<=res4;i++) printf("4");
			for(int i=1;i<=res7;i++) printf("7");
		}
		printf("\n");
	}
	return 0;
}