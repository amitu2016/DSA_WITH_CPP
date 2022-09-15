#include<iostream>
#include<deque>
using namespace std;

int main(int argc, char const *argv[])
{
    
    deque<int> d;

    d.push_back(1);

    d.push_front(2);

    d.push_back(3);

    d.push_front(4);

    d.push_back(5);

    for (int i : d)
    {
      cout << i << endl;  
    }

    cout << "Before pop front "<<endl;

     for (int i : d)
    {
      cout << i << endl;  
    }

    d.pop_front();

    cout << "After pop front "<<endl;
    
     for (int i : d)
    {
      cout << i << endl;  
    }

    cout << "Before pop back "<<endl;
 for (int i : d)
    {
      cout << i << endl;  
    }
    d.pop_back();

    cout << "After pop back "<<endl;
 for (int i : d)
    {
      cout << i << endl;  
    }

    cout << "Element at First Index = "<< d.at(1)<<endl;

    cout << "Element at Front = "<< d.front()<<endl;

    cout<< "Element at Back = "<< d.back()<<endl;

    cout << "Empty Or Not = "<< d.empty()<<endl;

    cout << "Before Erase Size = "<<d.size()<<endl;
    cout << "Before Erase Capacity = "<<d.max_size()<<endl;
    for(int i : d){
        cout << i << endl;
    }

    d.erase(d.begin(), d.end());

     cout << "After Erase "<<endl;
    cout << "After Erase Size = "<<d.size()<<endl;
    cout << "After Erase Capacity = "<<d.max_size()<<endl;
    for(int i : d){
        cout << i << endl;
    }

    return 0;
}
