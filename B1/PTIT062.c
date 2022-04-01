#include <stdio.h>
#include <stdlib.h>
#define fio(i,a,b) for(int i=a;i<=b;i++)
int arr[100005],brr[100005],i,n,t;
int temp,tmp,tmax,cnt=1;
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		fio(i,1,n) scanf("%d",&arr[i]);
		fio(i,1,n) brr[i]=arr[i];
		qsort(brr,n+1,sizeof(int),cmpfunc);
		tmax=brr[1];
		fio(i,1,n){
			if(brr[i]>tmax){
				cnt++;
				tmax=brr[i];
				
			}
			if(cnt==3){
				temp=brr[i];
				fio(i,1,n){
					if(arr[i]==temp){
						tmp=i;
						break;
					}
				}
				break;
			}
		}
		if(cnt<3) printf("Khong the tim duoc!");
		if(cnt==3) printf("%d %d",temp,tmp);
		cnt=1;temp=0;tmp=0;
	}
	return 0;
}