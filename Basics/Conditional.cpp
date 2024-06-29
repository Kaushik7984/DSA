#include <iostream>
using namespace std;

int main()
{
  // int a;
  // cin >> a;

  // // cout<<" value of n is :" << n <<endl;

  // // if a is positive

  // if (a > 0)
  // {
  //     cout << " A is Positive" << endl;
  // }
  // else
  // {
  //     cout << " A is negative" << endl;
  // }

  // int a,b;

  /* cout << "enter the value of a: ";
   cin >> a;

   cout << "enter the value of b: ";
   cin >> b;

    if (a>b){
      cout<< "a is greater than b";
    } else{
       cout << "b is greater than a";
    }
    */

  /*
      int a;

      cin >> a;

      if (a > 0)
      {
          cout << "a is positive";
      }
      else if (a < 0)
      {
          cout << "a is negative";
      }
      else
      {
          cout << "a is equal to zero";
      }
  */

  /*
    int a=9;
   if(a==9){
    cout << "nine";
   }
   if(a>0){
    cout<< "Positive";
   }
   else{
    cout<< "Negative";
   }

  */

  // int a = 2;
  // int b = a + 1;

  // if ((a = 3) == b)
  // {
  //     cout << a;
  // }
  // else
  // {
  //     cout << b;
  // }

  /*
   int a=24;
  if (a==24){
      cout<<"love";
  }else if(a<20){
      cout<<"lovely";
  }else{
      cout<<"nothing";
  }
  */

  char ch;

  cin >> ch;

  if (ch >= 'A' && ch <= 'Z')
  {
    cout << ch << " is an UpperCase character\n";
  }
  else if (ch >= 'a' && ch <= 'z')
  {
    cout << ch << " is an LowerCase character\n";
  }
  else
  {
    cout << ch << " is an Digit character\n";
  }
}   
