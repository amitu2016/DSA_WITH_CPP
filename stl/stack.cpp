#include<iostream>
#include<stack>

using namespace std;

int main(int argc, char const *argv[])
{
    
    stack<string> s;

    s.push("Amit");
    s.push("Kumar");
    s.push("Upadhyay");

    cout  << "Top Element: "<<s.top()<<endl;

    s.pop();

    cout  << "Top Element After POP: "<<s.top()<<endl;

    cout << "Size of Stack: "<<s.size()<< endl;

    cout << "Empty or Not: "<<s.empty()<<endl;

    return 0;
}
