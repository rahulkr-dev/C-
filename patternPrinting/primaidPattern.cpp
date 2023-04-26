// Print this pattern
/*
         1
        121
       12321
      1234321
     123454321
    12345654321
   1234567654321
  123456787654321
 12345678987654321
12345678910987654321
  */
  
#include<iostream>
using namespace std ;
int main(){
  int num ;
  cout<<"Enter number: " ;
  cin>>num ;

  int row = 1;
  while(row<=num){
    // Print Space
    int space = num - row ;
    while(space){
      cout<<" " ;
      space = space - 1 ;
    };
    // print !st triangle
    int j =1 ;
    while(j<=row){
      cout<<j ;
      j++ ;
    } ;
    // Print 2nd triangle 
    int start = row -1 ;
    while(start){
      cout<<start ;
      start = start-1 ;
    }
    cout<<endl ;
    row++ ;
    
  }
}