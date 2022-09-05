#include<iostream>
using namespace std;

int main(){
    int marks[100];
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    for(int i=1; i<=n; i++){
       cin >> marks[i];
    }

    cout << "Array :";
    for(int j = 0; j<=n; j++){
        cout << marks[j]<<",";
    }


}
