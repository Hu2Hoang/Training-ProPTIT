#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int i,n,m;
int a[100005],f[100005];
long long res;
//int vt=bsearch(a,0,n-1,x);
long long bsearch(int arr[], int l, int r, int x) {
  if (r >= l) {
    int mid = l + (r - l) / 2; 
    if (arr[mid] == x)
      return mid;
    if (arr[mid] > x)
      return bsearch(arr, l, mid - 1, x);
    return bsearch(arr, mid + 1, r, x);
  }
  return -1;
}
int main(){
	scanf("%d",&n);
	fio(i,1,n) scanf("%d", &a[i]);
	scanf("%d",&m);
	long long temp=0;
	fio(i,1,m){
		scanf("%d",&f[i]);
		//int tmp=f[i];
		temp+=bsearch(a,1,n,f[i]);
	}
	temp=temp%30;
	res=pow(2,temp);
	printf("%lld ",res);
	//fio(i,1,n) printf("%d ",a[i]);
	return 0;
}