#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int a,b,c,d;
  for(int i=0;i<3;++i) {
    cin>>a>>b>>c>>d;
    switch(a+b+c+d) {
      case 4: cout<<"E\n";break;
      case 3: cout<<"A\n";break;
      case 2: cout<<"B\n";break;
      case 1: cout<<"C\n";break;
      default: cout<<"D\n";
    }
  }
  return 0;
}
