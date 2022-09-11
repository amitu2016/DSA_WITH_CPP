#include <iostream>
#include <vector>
using namespace std;

void counting_sort(int a[], int n)
{

    // Initializing the largest element
    int largest = -1;

    // Finding largest element from the original array
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, a[i]);
    }

    // Create a count vector to store frequency
    vector<int> freq(largest + 1, 0);

    // Update the frequency Array
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    // Put back the elements from frequency array to original array

    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            a[j] = i;
            freq[i]--;
            j++;
        }
    }
    return;
}

int main(int argc, char const *argv[])
{
    int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
    int n = sizeof(arr) / sizeof(int);
    counting_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
