#include <iostream>
using namespace std;
int main() {
    int n1,n2,n3,n4;
    cin >> n1 >> n2 >> n3 >> n4;
    if (n1==n2 && n2==n3 && n3==n4)
        cout << 3;
    else if (n1==n2 && n1==n3 && n1!=n4)
        cout << 2;
    else if (n2!=n3 && n2!=n1 && n2==n4)
        cout << 1;
    else if (n1!=n2 && n2!=n3 && n3!=n4)
        cout << 0;
}
