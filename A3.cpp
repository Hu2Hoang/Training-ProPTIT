// #include <bits/stdc++.h>
// #define fio(i,a,b) for(i=a;i<=b;i++)
// using namespace std;
// int t,n,i,m1,m2,temp,tmp;
// int a[100005];
// int main(){
// 	cin>>t;
// 	while(t--){
// 		cin>>n;
// 		fio(i,1,n){
// 			cin>>a[i];
// 		}
// 		m1=a[1],m2=a[2];
// 		fio(i,1,n){
// 			if(a[i]>m1){
// 				m2=m1;
// 				m1=a[i];
// 			}
// 			else if(a[i]>m2){
// 				m1=m2;
// 				m2=a[i];
// 			}
// 		}
// 	}
// 	cout<<m2<<' '<<m1;
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int n,t;
int a[1000005];
	int main() {
    cin>>t;
    while(t--){
	  cin>>n;
	  for(int i=1;i<=n;i++) cin>>a[i];
	    
	    int max, m2;
	    max = m2 = -1e9;
	    
	    for (int i = 1; i <= n; i++) {
	        if (a[i] > max) {
	            m2 = max;
	            max = a[i];
	        } else if (a[i] > m2 && a[i] < max) {
	            m2 = a[i];
	        }
	        else max=m2=0;
	    }
	    
	    printf("%d %d", m2,max);
    }
	    return 0;
	}
