#include <iostream>
using namespace std;
int main() {
  string S;
  float H;
  cin >>S>>H;
  if (S=="M" && H<=1.70)
        cout<<"Short";
    else if (S=="M" && H>=1.70 && S=="M" && H<=1.85)
        cout<<"Normal";
    else if (S=="M" && H>=1.85)
        cout<<"Tall";
    else if (S=="F" && H<=1.60)
        cout<<"Short";
    else if (S=="F" && H>=1.60 && S=="F" && H<=1.75)
        cout<<"Normal";
    else if (S=="F" && H>=1.75)
        cout<<"Tall";

}

