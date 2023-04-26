#include<iostream>
using namespace std ;
int main(){
  int num = 81;
  // need iostream and using namespace std for using cout and endl
  // endl for new line or \n
  cout<<"Rahul kumar"<<'\n' ;
  cout << num << endl; 
  // Typecasting
  int val = 'z';
  char ch =122 ;
  cout <<val <<endl << ch << endl;
  // for knowing size of variable we use sizeof(variableName)
  int size = sizeof(val);
  cout << "Size of variable ch :-> " << size << endl ;
}