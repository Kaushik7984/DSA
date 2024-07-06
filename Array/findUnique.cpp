/* you have been given an integer arrayList(ARR) of size N. where N is equal to {2M+1}, Now, in the given arrayList,"M" numbers are present twice and one number is present only once. 
You need to find andreturn that number which is unique in the arrayList*/



 #include<iostream>
 using namespace std;

 int findUnique(int arr[], int size){
    int ans = 0;

    for (int i = 0; i < size; i++){

            ans = ans ^ arr[i];
    }
    cout << ans;
    // return ans;
}

int main(){
     int arr[7] = {1,3,1,6,3,6,2};
    
     findUnique(arr, 7);

 return 0;
}



