//swap alternate like {1,2,3,4,5,6} => {2,1,4,3,6,5}

 #include<iostream>
 using namespace std;

 void swap(int arr[], int n){
    int i;

    while(i<n){
          if(i+1< n) {
            // swap(arr[i], arr[i + 1]);

            int temp;
            arr[i]= temp;
            temp = arr[i + 1];
            arr[i + 1] = arr[i];

          i = i + 2 ;
          }
    }
 }

 void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
      cout <<  arr[i] << " ";
    }
    cout << endl;
}

int main(){
     int arr[6] = {1,2,3,4,5,6};
     int odd[5] = {11,33,9,76,43};

     swap(arr, 6);
     printArray(arr, 6);

     cout<< endl;

     swap(odd, 5);
     printArray(odd, 5);

 return 0;
}

