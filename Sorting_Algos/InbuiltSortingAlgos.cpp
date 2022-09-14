#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int a, int b){
    return a < b;
}

int main(int argc, char const *argv[])
{
     int arr[] = {-2,3,4,-1,5,-12,6,1,3};

	int n = sizeof(arr)/sizeof(int);

   // sort(arr, arr+n, compare);

   sort(arr, arr+n, greater<int>());

    //reverse(arr, arr+n);

    for(int x : arr){
        cout << x << " ,";
    }

    return 0;
}
