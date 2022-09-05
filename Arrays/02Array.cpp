#include<iostream>
using namespace std;


void printArray(int arr[], int n){
    cout << "Inside method size of array: " << sizeof(arr) <<endl;

   // int n = sizeof(arr)/sizeof(int);
     for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }

}

int main(){

    int arr[] = {3,1,7,2,5,4};

    int n = sizeof(arr)/sizeof(int);

    printArray(arr,n);

    cout << "inside main size of array: " << sizeof(arr) <<endl;

    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }

    return 0;
}
