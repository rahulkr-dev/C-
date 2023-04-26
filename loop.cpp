
// Prime Number program
#include <iostream>
using namespace std ;
int main(){
  int num;
  cout <<"Enter Number: " ;
  cin>>num ;
  int i=2 ;
  while(i<num){
    cout << (num%i==0) << endl ;
    if(num%i ==0){
      cout <<"Not a Prime Number" <<i <<endl ;
      return 0 ;
    };
    i = i+1 ;
  };
  cout << num <<" It is prime number" << endl ;
}