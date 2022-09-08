#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for (int i = 0; i < n  - 2; i++)
    {
        int current = arr[i];
        int min_pos = i;


    // For Finding minimum element in Array
        for (int j = i; j < n; j++)
        {
            if(arr[j] < arr[min_pos]){
                min_pos = j;
            }
        }
        
        //For Swapping the current element with smallest element
        swap(arr[min_pos], arr[i]);

    }
    

}

int main(int argc, char const *argv[])
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};

	int n = sizeof(arr)/sizeof(int);

    selectionSort(arr,n);

    for(auto x: arr){
        cout << x << ",";
    }
    

    return 0;
}
