#include<iostream>

using namespace std;

void sortedArray(int arr[], int n){

    for (int i = 0; i < n -1; i++)
    {
        for (int j = 0; j <= n - i -1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    

}


int main(int argc, char const *argv[])
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};

	int n = sizeof(arr)/sizeof(int);

    sortedArray(arr,n);

    for(auto x: arr){
        cout << x << ",";
    }
    

    return 0;
}
