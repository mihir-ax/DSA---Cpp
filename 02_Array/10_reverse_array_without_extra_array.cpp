#include <bits/stdc++.h>
using namespace std;

int main()
{

    // reverse_array_without_extra_array

    vector<int> v = {5, 8, 6, 7, 2, 4};
    int i = 0;
    int j = v.size() - 1;

    while (i < j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }

    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}
