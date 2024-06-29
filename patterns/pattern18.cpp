
/*

           1
         1 2 1
       1 2 3 2 1
     1 2 3 4 3 2 1

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
      //print space
        int space = n - i;
        while(space){
            cout<< " ";
            space--;
        }

      //print first triagle
        int j= 1;
        while (j<=i){
            cout<< j;
            j++;
        }        

      //print second triagle
        int start = i- 1;
        while(start){
            cout<<start;
            start--;
        }

        cout << endl;
        i++;
    }
}
