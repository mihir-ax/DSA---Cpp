#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {8, 6, 2, 4, 8, 3, 1};
    int sum = 6;

    int i = 0;
    int j = 0;

    while (i < v.size())
    {
        if (j == v.size() - 1)
        {
            i++;
            j = 0;
        }
        if (v[i] + v[j] == sum) {
            cout << i << " " << j << "\n";
        }
        j++;
    }

    return 0;
}
