
#include <bits/stdc++.h>
using namespace std;
 
int circle(int x1, int y1, int x2,
           int y2, int r1, int r2)
{
    int distSq = (x1 - x2) * (x1 - x2) +
                 (y1 - y2) * (y1 - y2);
    int radSumSq = (r1 + r2) * (r1 + r2);
    if (distSq == radSumSq)
        return 1;
    else if (distSq > radSumSq)
        return -1;
    else
        return 0;
}
 
// Driver code
int main()
{
    int x1,y1,x2,y2,r1,r2;
    cin>>x1>>y1>>x2>>y2>>r1>>r2;
    int t = circle(x1, y1, x2,
                   y2, r1, r2);
    if (t == 1)
        cout << "Touch";
    else if (t < 0)
        cout << "Don't Cut";
    else
        cout << "Cut";
    return 0;
}