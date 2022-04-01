#include<stdio.h>
#include<math.h>
#include<string.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
int i,n,t;
int a[10000005];
bool b[10000005]={false};
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int temp;
		memset(a,0,sizeof(a));
		memset(b,false,sizeof(b));
		temp=a[0];
		fio(i,0,n){
			scanf("%d",&a[i]);
			if(a[i]>0){
				b[a[i]]=true;
				if(a[i]>temp) temp=a[i];
			}
			else res=1;
		}
		if(res=1) printf("1");
		else fio(i,1,temp+1) if(b[i]==false) printf("%d\n",i );
		b[i]=false;n=0;temp=0;
	}
	return 0;
}