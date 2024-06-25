#include<iostream>
using namespace std;

int main(){
    // while loop to print 1 to 5

    /*
    int i=1;
    int n;
    cin>>n;

     while (i <= n)
     {
        cout << i <<" ";
        i++;
     }
    */


    /*
    int sum = 0;
    int i=1;
    int n;
    cin>>n;

     while (i <= n)
     {
        sum = sum + i ;
        i++;
       
     }
      cout<< sum;
    */


 //find the sum of all even no. 
   /*
    int sum = 0;
    int i=2;
    int n;
    cin>>n;

     while (i <= n)
     {
       if( i % 2 == 0){
       
        sum = sum +i;
        i = i+ 2;
       }
     }
      cout<< sum;
   */

  // prime or not


  int n;
  cin >> n;

  int i=2;
  while(i<n){

    //divide thay to, Not Prime
    if(n%i == 0){
        cout << "Not Prime" <<endl;
    }else{
        cout<< "Prime for "<< i <<endl;
    }
    i++;
  
  }
     
}
