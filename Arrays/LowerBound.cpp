#include<bits/stdc++.h>
using namespace std;

/*Given an array of integers A (sorted) and a integer Val.

Implement a function that takes A and Val as input parameters and returns the lower bound of Val.

Note : If Val is not present in array then Lower bound of a given integer means integer which is just smaller than given integer.

Otherwise Val itself is the answer.

If Val is less than smallest element of array A then return '-1' in that case.



Example 1  :

A = [-1, -1, 2, 3, 5]

Val = 4

Answer :  3

Since 3 is just smaller than 4 in the array.

Example 2  :

A = [1, 2, 3, 4, 6]

Val = 4

Answer :  4
Since 4 is equal to 4.*/

int lowerBound(vector<int> A, int Val) {
     int max_val = 0;
    for (int i = 0; i < A.size(); i++)
    {
       
       if (A[i] < Val || A[i] == Val)
       {
        max_val = max(max_val,A[i]);
       }
       
    }
    return max_val;
    
}

int main(int argc, char const *argv[])
{
    vector<int> A = {-1, -1, 2, 3, 5};
    int Val = 4;
    int result = lowerBound(A,Val);
    cout << result <<endl;
    return 0;
}
