#include <iostream>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(2);

    for (int i : s)
    {
        cout << i << endl;
    }

    return 0;
}
