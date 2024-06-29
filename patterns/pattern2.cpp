/*

111
222
333

*/


#include<iostream>
using namespace std;

int main(){
 int n ;
 cin>>n;

 int i=1;

 while(i<=n){ //first loop is for row {like, i1,i2,i3   }

    int j =1 ;
    
    while(j<=n){ //second loop is for column
        cout<<i;
        j++;
    }
    cout<<endl;

    i++;
 }

}


/*


   j1 j2 j3
i1 1  1  1
i2 2  2  2
i3 3  3  3


i is row 
j is column

*/