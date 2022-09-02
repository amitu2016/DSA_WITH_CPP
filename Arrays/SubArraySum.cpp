#include<iostream>

using namespace std;

// Problem: Find Sum of largest subarray
//  Brute Force Approach

int printSubarraySum(int arr[], int n){
    int largest_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j =  i; j < n; j++)
        {

            int subArraySum = 0;
            for (int k = i; k <= j; k++)
            {
                subArraySum += arr[k];
            }

            largest_sum = max(largest_sum, subArraySum);
            
        }
        
    }
    
    return largest_sum;
}

int main(int argc, char const *argv[])
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};

	int n = sizeof(arr)/sizeof(int);

    cout << printSubarraySum(arr,n);

    return 0;
}
