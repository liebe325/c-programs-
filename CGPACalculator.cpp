#include <iostream>
using namespace std;

int main() {
  //var
  int sub1 ;
  int sub2 ;
  int sub3 ;
  int sub4 ;
  int sub5 ;
  int total;
  int cgpe;

  //input from user 

  cout << " enter a marks of subject 1  :  " << endl ;
  cin >> sub1;
  cout << " enter a marks of subject 2  :  " << endl ;
  cin >> sub2;
  cout << " enter a marks of subject 3  :  " << endl ;
  cin >> sub3;
  cout << " enter a marks of subject 4  :  " << endl ;
  cin >> sub4;
  cout << " enter a marks of subject 5  :  " << endl ;
  cin >> sub5;

  // CGPE cal

  total=sub1+sub2+sub3+sub4+sub5;
  cgpe=total/5;

  // printing output 

  cout << "Your CGPA of five subjects is : " << cgpe << endl ;
  
  
  return 0;
}
