#include <iostream>

using namespace std;

// SubArraySum by using Prefix Sum Approach

int printSubarraySum(int arr[], int n)
{
    int prefixSum[n] = {0};
    prefixSum[0] = arr[0];
    for (int i = 0; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    int largest_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subArraySum = prefixSum[j] - prefixSum[i - 1];

            largest_sum = max(largest_sum, subArraySum);
        }
    }

    return largest_sum;
}

int main(int argc, char const *argv[])
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};

    int n = sizeof(arr) / sizeof(int);

    cout << printSubarraySum(arr, n);

    return 0;
}
