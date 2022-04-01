#include <bits/stdc++.h>
#include<time.h>
using namespace std;
int i,n,x;
long long a[100005];
int search(long long a[],int n,int x){
	int l=0,r=n-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x) return mid;
		else if(a[mid]>x) r=mid-1;
			else l=mid+1;
	}
	return -1;
}
//int vt=binarySearch(a,0,n-1,x);
int Bsearch(long long arr[], int l, int r, int x) {
  if (r >= l) {
    int mid = l + (r - l) / 2; 
    if (arr[mid] == x)
      return mid;
    if (arr[mid] > x)
      return Bsearch(arr, l, mid - 1, x);
    return Bsearch(arr, mid + 1, r, x);
  }
  return -1;
}

int main(){
	freopen("cout1e.inp","r",stdin);
	cin>>n>>x;
	for(int i=0;i<n;i++) cin>>a[i];
	clock_t start, end;
	double time_use;
	start=clock();
	//int vt=binarySearch(a,0,n-1,x);
	int vt=search(a,n,x);
	cout<<vt<<"\n";
	end=clock();
	time_use = (double)(end - start) / CLOCKS_PER_SEC;
	cout<<time_use;
	return 0;
}