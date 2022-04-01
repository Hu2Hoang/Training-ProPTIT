#include <bits/stdc++.h>
using namespace std;
stack<char> s1,s2;
vector<string> v;
void quay_lui(string s, int a, int b)  //  a luu so luong ngoac '(' b luu so luong ')'
{
    if(a == 0 && b == 0)
    {
        v.push_back(s);
        return;
    }
    cout<<a<<endl;
    if(a){
        quay_lui(s + '(', a - 1, b);
    }
     cout<<a<<endl;
    if(b > a)
    {
        quay_lui(s + ')', a, b - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    quay_lui("", n / 2, n /2 );

    sort(v.begin(), v.end());

    for(int i = 0 ; i < v.size() ; i++)
    {
        cout << v[i] << endl;
    }
    cout << v.size();
}