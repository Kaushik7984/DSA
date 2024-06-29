#include<iostream> // cout is belongs to this library
using namespace std;  // to use cout

int main() {
    
  cout << "HEllO WORLD" << endl;  // endl for new line
  cout << "I'm Kaushik Tapaniya" <<endl ; // cout << for print output on display

  int a = 123;
  cout<< a <<endl;

  char b = 'c';
  cout<< b <<endl;

  bool bl = true;
  cout<< bl <<endl;

  float f = 1.22;
  cout<< f <<endl;

  double d =1.555;
  cout<< d <<endl;

  int size = sizeof(d); // for count size of datatype
  cout<< "Size of d is:" <<size <<endl <<endl;


  //type Casting

  int t = 'a';
  cout<<  t <<endl;

  char ch1 = 97;
  cout<< ch1 <<endl;

  char ch2 = 123456;
  cout<< ch2 <<endl;


}

/*
 Operators in c++

  Arithmetic operators ( +, -, *, /, % )
  Compound assignment (+=, -=, *=, /=, %=, >>=, <<=, &=, ^=, |=)
  Increment and decrement (++, --)
  Relational and comparison operators ( ==, !=, >, <, >=, <= )
  Logical operators ( !, &&, || )
  Conditional ternary operator ( ? ) ( c = (a>b) ? a : b )
  Comma operator ( , )  ( a = (b=3, b+2); )
  Bitwise operators ( &, |, ^, ~, <<, >> )

 */

