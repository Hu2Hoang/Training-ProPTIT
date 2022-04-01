#include<stdio.h>
#include<math.h>
#include<string.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
// void swap(char &a,char &b){
// 	char tmp;
// 	tmp=a;
// 	a=b;
// 	b=tmp;
// }
int k,i,n,vt;
char s[8];	
int main(){
	w(t){
		scanf("%d",&k);
		scanf("%s",s);
		n=strlen(s);
		for(int i=0;i<n-1;i++){
			char max=s[n-1];
			vt=n-1;
			for(int j=n-1;j>i && k>0;j--){
				if(max<s[j]){
					max=s[j];
					vt=j;
				}
				if(max>s[i]&&k>0){
					swap(s[i],s[vt]);
					k--;
				}
			}
		}
		printf("%s\n",s);
	}
	return 0;
}