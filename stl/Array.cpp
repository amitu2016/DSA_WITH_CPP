#include<iostream>
#include<array>
using namespace std;


int main(int argc, char const *argv[])
{
    array<int,4> arr = {1,2,3,4};

    int size = arr.size();

    cout << "Size of Array = " << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    
    cout << "Element at 2nd Index = "<< arr.at(2)<< endl;

    cout << "Element at begining of array = "<<arr.front()<<endl;

    cout << "Element at End of array = "<<arr.back()<<endl;

    cout << "Array is empty or not = "<<arr.empty()<<endl;

    return 0;
}
