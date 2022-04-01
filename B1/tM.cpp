 #include <iostream>
 #include <string>
 #include <cmath>
 #include <algorithm>

 using namespace std;

 int main() {

 unsigned size;

 cin >> size;

 int iSize = static_cast<int>(size);

 for (int r = 1 - iSize; r < iSize; r++) {
    for (int c = 1 - iSize; c < iSize; c++) {       

        cout << static_cast<char>( '`' + 1+  min(abs(r), abs(c)) ); // this is the change.


         }
        cout << endl;

     }


 }

// #include <iostream>
// #include <string>
// #include <cmath>
// #include <algorithm>

// using namespace std;

// int main() {

//     int size;

//     cin >> size;

//     int iSize = size;

//     for (int r = 1 - iSize; r < iSize; r++) {
//         for (int c = 1 - iSize; c < iSize; c++) {   
//             cout <<  min(abs(r), abs(c))+1;
//         }   
//         cout << endl;
//     }
// }