#include<iostream>

using namespace std;

int linearSearch(int arr[], int n, int key){

    for(int i = 0; i < n; i++){
        if(arr[i] == key){
           return i;
        }
    }

    return -1;
}



int main(){

int arr[] = {5,3,7,2,8,0,5,1,4};

int n = sizeof(arr)/sizeof(int);


cout << "Enter Key Element"<<endl;

int key;

cin >> key;

int index = linearSearch(arr,n,key);

if(index != -1){
    cout << "Key is present at position "<<index <<endl;
}else{
 cout << "Key is not present in Array"<<endl;
}

return 0;
}
