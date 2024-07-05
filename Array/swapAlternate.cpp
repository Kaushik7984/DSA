//swap alternate like {1,2,3,4,5,6} => {2,1,4,3,6,5}

 #include<iostream>
 using namespace std;

 void reverse(int arr[], int n){

    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start], arr[start + 1]);
        start = start + 2 ;
     
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
     reverse(arr, 6);
     printArray(arr, 6);
 return 0;
}

