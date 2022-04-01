#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int max(int a,int b){
	if(a>b) return a;
	else return b;
}
int min(int a,int b){
	if(a<b) return a;
	else return b;
}
int i,n,a;
int amin=-1e9;
long long temp,s1,s2;
int main(){
	s1=-1e9;s2=0;temp=0;
	bool ktd=true;
	bool kta=true;
	scanf("%d",&n);
	fio(i,0,n){
		scanf("%d",&a);
		temp+=a;
		if(temp<0) temp=0;
		else s1=max(temp,s1);
		if(a>=0){
			kta = false;
			s2+=a;
		}
		if(a<0){
			ktd = false;
			if(a>amin) amin =a;
		}	
	}
	if(ktd==true) printf("%d %d",temp,s2);
	else if(kta==true) printf("%d %d",amin,amin);
	else printf("%d %d",s1,s2);
 	return 0;
}