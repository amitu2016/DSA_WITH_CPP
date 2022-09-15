#include<iostream>
#include<list>

using namespace std;

int main(int argc, char const *argv[])
{
    list<int> l;

    l.push_front(1);
    l.push_back(2);
    l.push_front(3);
    l.push_back(4);
    l.push_front(5);
    l.push_back(6);
    l.push_front(7);

    for(int i : l){
        cout << i << endl;
    }

     cout << "Before pop front "<<endl;

     for (int i : l)
    {
      cout << i << endl;  
    }

    l.pop_front();

    cout << "After pop front "<<endl;
    
     for (int i : l)
    {
      cout << i << endl;  
    }

     cout << "Before pop back "<<endl;
 for (int i : l)
    {
      cout << i << endl;  
    }
    l.pop_back();

    cout << "After pop back "<<endl;
 for (int i : l)
    {
      cout << i << endl;  
    }


    cout << "Element at Front = "<< l.front()<<endl;

    cout<< "Element at Back = "<< l.back()<<endl;

    cout << "Empty Or Not = "<< l.empty()<<endl;

    cout << "Before Erase Size = "<<l.size()<<endl;
    cout << "Before Erase Capacity = "<<l.max_size()<<endl;
    for(int i : l){
        cout << i << endl;
    }

    l.erase(l.begin(), l.end());

     cout << "After Erase "<<endl;
    cout << "After Erase Size = "<<l.size()<<endl;
    cout << "After Erase Capacity = "<<l.max_size()<<endl;
    for(int i : l){
        cout << i << endl;
    }


  list<int> last(5,100);
  cout << "Printing Last" << endl;
  for(int i : last){
        cout << i << endl;
    }

    return 0;
}
