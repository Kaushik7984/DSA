/*
   1234554321
   1234**4321
   123****321
   12******21
   1********1

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
        // first
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }

        // second
        int k = 1;
        while (k < i)
        {
            cout << "*";
            k++;
        }

        // third
        int third = i - 1;
        while (third)
        {
            cout << "*";
            third--;
        }

        // fouth
        int four = n - i + 1;
        while (four >= 1)
        {
            cout << four;
            four--;
        }

        cout << endl;
        i++;
    }
}