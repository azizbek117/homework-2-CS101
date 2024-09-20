#include <iostream>
using namespace std;
int main(){
long long num;

        cin>>num;
        switch( num>=-2147483647 && num<=2147483647 ) {
        case 0:
        cout<<"NO"<<endl;
        break;
        case 1:
        cout<<"YES"<<endl;
        break;
    }
    return 0;


 }