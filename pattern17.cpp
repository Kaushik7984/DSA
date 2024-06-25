
/*

       1
      22
     333
    4444

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
//         int k = 1  ;
//         while (k <= n-i)
//         {
//             cout << " ";
//             k++;

//         }

//         // for star
//         int j = 1;
//         while (j<=i)
//         {
//             cout << i;
//             j++;
//         }

//         cout << endl;
//         i++;
//     }

//     cout << endl;
//     i++;
// }

/*

       1
      23
     456
    78910

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 1;

    int i = 1;
    while (i <= n)
    {
        // for space
        int k = 1;
        while (k <= n - i)
        {
            cout << " ";
            k++;
        }

        int j = 1;
        while (j <= i)
        {
            cout << count;
            count++;
            j++;
        }

        cout << endl;
        i++;
    }

    cout << endl;
    i++;
}
