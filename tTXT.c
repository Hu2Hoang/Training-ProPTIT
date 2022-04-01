#include <stdio.h>

int i,n,b,res=0;

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int compare (const void * p1, const void * p2)
{
  return (*(int*)p1 - *(int*)p2);
}

int arr[10005];

int main(){
	freopen("txt.inp","r",stdin);
	freopen("txt.out","w",stdout);
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	qsort(arr, n, sizeof(int), compare);
	int temp=arr[1];
	for ( i = 0; i < n; ++i)
	{
		if(arr[i]>temp) res=arr[i];
		res=max(res,arr[i]);
	}
	printf("%d",res);
	return 0;
}
