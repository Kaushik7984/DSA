// #include<iostream>
// using namespace std;
// int main()
// {
//   int n1,n2,i,j;
//   cout<<"Enter the no. of elements of the 1st array: ";
//   cin>>n1;
//   int arr1[n1];

//   cout<<"Enter the elements of the 1st array: ";
//   for(i=0;i<n1;i++)
//   {
//     cin>>arr1[i];
//   }
  
//   cout<<"\nEnter the no. of elements of the 2nd array: ";
//   cin>>n2;
//   int arr2[n2];
  
//   cout<<"Enter the elements of the 2nd array: ";
//   for(i=0;i<n2;i++)
//   {
//     cin>>arr2[i];
//   }
  
//   /* printing elements that are common in both the arrays */
//   cout<<"\nThe intersection of the two arrays: ";
//   for(i=0;i<n1;i++)
//   {
//     for(j=0;j<n2;j++)
//     {
//       if(arr1[i]==arr2[j])
//       {
//         cout<<arr1[i]<<" ";
//       }
//     }
//   }
  
//   return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int n1=4;
    int n2=5;
 
     int arr1[4]={1,2,3,4};
     int arr2[5]={3,4,5,6,7};
     

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        
        {
            if(arr1[i] == arr2[j]){
                cout <<arr1[i] <<" " ;
            }
        }
        
    }
    
    
    return 0;
}