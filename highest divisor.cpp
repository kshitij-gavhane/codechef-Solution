// HIGHEST DIVISOR IN CPP
#include <iostream>
using namespace std;

int main() {
    int x, i = 11;
    cin >> x;

    while (--i) if ((x%i) == 0) {
        cout << endl << i;
        break;
    }
    cout << endl;
    
    return 0;
}
