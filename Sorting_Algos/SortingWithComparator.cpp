#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool compareLower(int a, int b)
{
    return a < b;
}

bool compareGreater(int a, int b)
{
    return a > b;
}

vector<int> sortingWithComparator(vector<int> a, bool flag)
{

    if (flag)
    {
        sort(a.begin(), a.end(), compareLower);
        return a;
    }
    else
    {
        sort(a.begin(), a.end(), compareGreater);
        return a;
    }
}

int main(int argc, char const *argv[])
{
    vector<int> original = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};

    // vector<int> sortedArray = sortingWithComparator(original, true);

    vector<int> sortedArray = sortingWithComparator(original, false);

    for (auto x : sortedArray)
    {
        cout << x << endl;
    }

    return 0;
}
