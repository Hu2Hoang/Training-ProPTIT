#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
	
int main(){
	scanf("%d",&n);
    for(int i=1;i<=n;i++) 
    {
        for(int j=1;j<=i;j++)scanf("%d",&A[i][j]);
        A[i][0]=A[i][i+1]=-1;            
     }
}

// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
long long int check(int A, int B, int C,
                    int D, long long int x)
{
    long long int ans;
    ans = (A * x * x * x
           + B * x * x
           + C * x
           + D);
    return ans;
}
void findSolution(int A, int B, int C,
                  int D, int E)
{
    int start = 0, end = 100000;
 
    long long int mid, ans;
 
    // Implement Binary Search
    while (start <= end) {
 
        // Find mid
        mid = start + (end - start) / 2;
 
        // Find the value of f(x) using
        // current mid
        ans = check(A, B, C, D, mid);
 
        // Check if current mid satisfy
        // the equation
        if (ans == E) {
            // Print mid and return
            cout << mid << endl;
            return;
        }
        if (ans < E)
            start = mid + 1;
        else
            end = mid - 1;
    }
}