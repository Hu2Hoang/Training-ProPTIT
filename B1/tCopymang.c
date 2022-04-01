#include <bits/stdc++.h>
#define fio(i,a,b) for(int i=a;i<=b;i++)
int arr[100005],brr[10005],i,n;
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main(){
	scanf("%d",&n);
	fio(i,1,n) scanf("%d",&arr[i]);
	fio(i,1,n) brr[i]=arr[i];
//	brr=arr;
	qsort(brr,n+1,sizeof(int),cmpfunc);
	fio(i,1,n) printf("%d ",brr[i]);
	return 0;
}