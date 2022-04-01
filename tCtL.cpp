#include<bít/stdc++.h>
using namespace std;
int main() {
    int n;
    int tChan = 0,tLe=0;

    cin >> n;
    int b=0;
    while (n > 0) {
        b = n % 10;
        if (b % 2 == 0)
            tChan += b;
        else 
            tLe +=b;
        n /= 10;
    }
    cout << tChan <<endl;
    cout << tLe <<endl;
    return 0;
}
 