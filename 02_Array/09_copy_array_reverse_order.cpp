#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {5, 8, 6, 7, 9, 3, 2};
    vector<int> reversed;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        reversed.push_back(v[i]);
    }

    for (auto i : reversed)
    {
        cout << i << " ";
    }

    return 0;
}
