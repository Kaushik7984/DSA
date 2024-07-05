 #include<iostream>
 using namespace std;

 void reverse(int arr[], int n){

    int start = 0;
    int end = 1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start ++ ;
        end --;
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
     int brr[5] = {16,-12,5,-8,4};

     reverse(arr, 6);
     reverse(brr, 5);

     printArray(arr, 6);
     printArray(brr, 5);

 return 0;
}


// questions

//swap alternate like {1,2,3,4,5,6} => {2,1,4,3,6,5}

// find uniqe

//find duplicate

// array intersection like  ar1={1,2,3,4} and ar2={2,4,6,8} => {2,4}

// pair sum

//triplet sum

//sort 0's and 1's