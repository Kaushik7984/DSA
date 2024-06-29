/*
      AAAA
      BBBB
      CCCC
      DDDD
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

        int j = 1;

        while (j <= n)
        {
            char ch = 'A' + i -1;
          cout << ch; //type casting
          j++;
        }
        cout << endl;
        i++;
    }
}





/*
      ABCD
      ABCD
      ABCD
      ABCD
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

        int j = 1;

        while (j <= n)
        {
            char ch = 'A' + j -1;
          cout << ch; //type casting
          j++;
        }
        cout << endl;
        i++;
    }
}

*/