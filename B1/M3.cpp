#include <bits/stdc++.h>
#define fio(i,a1,b) for(i=a1;i<b;i++)
using namespace std;
int i,n,t,result;
int a[1000005],brr[1000005];
// int check(int a[1000005]){
// 	int result;
	
// }

int main(){
	cin>>t;
	while(t--){
		
		cin>>n;
		fio(i,0,n){
			cin>>a[i];
		}
		fio(i,0,n){
			if(a[0]>1||a[n-1]<0){
				result=1;
				break;
			}
			for(i=1;i<n-1;i++){
				if(a[i]<0){
					if(a[i+1]<=1){
						continue;
					}
					else{
						result=1;
						break;
					}
				}
				else if(a[i]+1<a[i+1]){
					result=a[i]+1;
					break;
				}
			}
		}
		cout<<result<<"\n";
	}
	return 0;
}