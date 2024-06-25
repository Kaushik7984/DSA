/*
    ****
     ***
      **
       *
 */

/*
 #include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        // for space
        int j = 1;
        while (j <= i)
        {
            cout << " ";
            j++;
        }

        // for star
        int k = 1;
        while (k <= n - i + 1)
        {
            cout << "*";
            k++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    i++;
}

 */



/*

    1111
     222
      33
       4

*/


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         // for space
//         int j = 1;
//         while (j <= i)
//         {
//             cout << " ";
//             j++;
//         }

//         // for star
//         int k = 1;
//         while (k <= n - i + 1)
//         {
//             cout << i;
//             k++;
//         }

//         cout << endl;
//         i++;
//     }

//     cout << endl;
//     i++;
// }




/*

    1234
     234
      34
       4

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
        // for space
        int j = 1;
        while (j <= i)
        {
            cout << " ";
            j++;
        }

        // for star
        int k =i ;
         
        while (k <= n )
        {
            cout << k  ;
           
            k++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    i++;
}
