#include <iostream>
using namespace std ;
int main() {
  int a,b;
  // cin is used to take input from user 
  // cin>>a>>b ;
  cout << "Enter first Number" << endl ;
  cin>>a ;
  cout << "Enter second Number" << endl ;
  cin >> b ;
  // we are using if - elseif - else ladder for conditions 
  if(a>b) {
    cout<<"A is greater than b by "<<a-b <<endl ;
  }
  else if(b>a) {
    cout << "B is greater than a by " << b-a << endl ;
  }
  else {
    cout <<"Both a and b are equal\n" ;
  }
}