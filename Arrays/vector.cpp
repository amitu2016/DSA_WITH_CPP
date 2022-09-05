#include<iostream>
#include<vector>
using namespace std;


int main(int argc, char const *argv[])
{
   
    vector<int> arr = {6,8,1,2,9,3};

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    cout << endl;

    vector<int> arr2(10,7);


    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << endl;
    }

    return 0;
}
