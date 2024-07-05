//print all unique elements in a given array


#include <bits/stdc++.h>
using namespace std;
 
void printDistinct(int arr[], int n)
{
    // First sort the array so that all occurrences become consecutive
    sort(arr, arr + n);
 
    
    for (int i=0; i<n; i++) // Traverse the sorted array
    {
       
       while (i < n-1 && arr[i] == arr[i+1]) // Move the index ahead while there are duplicates
          i++;
 
       
       cout << arr[i] << " ";
    }
}
 

int main()
{
    int arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    printDistinct(arr, n);
    return 0;
}