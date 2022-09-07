#include<bits/stdc++.h>
using namespace std;

/* Given an integer vector and a value k, your task is to rotate the array k times clockwise.

Input Format

In the function an integer vector and number k is passed.

Output Format

Return an integer vector.



Sample Input

{1, 3, 5, 7, 9}, x = 2


Sample Output

{7, 9, 1, 3, 5}


Explanation

After 1st rotation - {9, 1, 3, 5, 7}
After 2nd rotation - {7, 9, 1, 3, 5}*/

vector<int> kRotate(vector<int> a, int k){
    vector<int> shifted = {0};
    int temp = 0;
    for (int i = 0; i < k; i++)
    {
        for (int i = 0; i < a.size(); i++)
        {
            temp = a[i];
            a[i] = a[a.size() - 1];
            a[a.size() - 1] = temp;
        }
        
    }

    return a;
    
    
}

int main(int argc, char const *argv[])
{
    vector<int> a = {1, 3, 5, 7, 9};
    int k = 2;
    vector<int> result = kRotate(a,k);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    
    return 0;
}
