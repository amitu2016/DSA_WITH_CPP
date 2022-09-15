#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> v;

  // cout << "Capacity = " << v.capacity() << endl;

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  cout << "Capacity = " << v.capacity() << endl;

  cout << "Size = " << v.size() << endl;

  cout << "Before POP operation" << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
  }

  v.pop_back();

  cout << "After POP operation" << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
  }
  v.push_back(4);
  v.push_back(5);

  cout << "Element at index 2 = " << v.at(2) << endl;

  cout << "Size before Clear " << v.size() << endl;
  v.clear();
  cout << "Size after Clear " << v.size() << endl;
  cout << "Capacity after clear " << v.capacity() << endl;

  // Initializing vector
  vector<int> arr(5, 1);
  cout << "Printing arr" << endl;
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << endl;
  }

  // Copying 1 vector to another

  vector<int> duplicate(arr);

  cout << "Printing duplicate" << endl;
  for (int i = 0; i < duplicate.size(); i++) {
    cout << arr[i] << endl;
  }

  return 0;
}