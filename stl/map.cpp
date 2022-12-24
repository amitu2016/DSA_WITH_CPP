#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    map<int, string> m;

    m[5] = "Amit";
    m[2] = "Kumar";
    m[3] = "Upadhyay";

    m.insert({13, "Bheem"});

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 13 ---> " << m.count(13) << endl;

    cout << "Finding -13 ---> " << m.count(-13) << endl;

    m.erase(3);

    cout << "After Erasing 3 " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
