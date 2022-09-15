#include<iostream>
#include<queue>

using namespace std;

int main(int argc, char const *argv[])
{
    queue<string> q;

    q.push("A");
    q.push("B");
    q.push("C");
    q.push("D");
    q.push("E");

    cout << "First Element: "<<q.front()<<endl;

    cout << "Size before pop "<<q.size()<< endl;

    q.pop();

    cout << "First Element after pop: "<<q.front()<<endl;
    
    cout << "Size after pop "<<q.size()<< endl;


    return 0;
}
