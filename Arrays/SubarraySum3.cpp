#include<iostream>

using namespace std;

int printSubArray(int arr[], int n){

    int cs = 0;
    int largest = 0;

    for (int i = 0; i < n; i++)
    {
        cs = cs + arr[i];
        if(cs < 0){
            cs = 0;
        }

        largest = max(cs,largest);
    }
    
    return largest;

}


int main(int argc, char const *argv[])
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};

    int n = sizeof(arr) / sizeof(int);

    cout << printSubArray(arr, n);
    return 0;
}
