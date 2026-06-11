#include <bits/stdc++.h>
using namespace std;

vector<int> mergeSortVector(vector<int> &v1, vector<int> &v2)
{
    int i = 0;
    int j = 0;
    vector<int> v3;
    while (i < v1.size() || j < v2.size())
    {
        if (v1[i] > v2[j])
        {
            v3.push_back(v2[j]);
            j++;
        }
        else if (v1[i] < v2[j])
        {
            v3.push_back(v1[i]);
            i++;
        }
    }

    return v3;
}

int main()
{
    vector<int> v1 = {1, 4, 7, 8, 10};
    vector<int> v2 = {2, 3, 5, 6, 20};

    vector<int> v33 = mergeSortVector(v1, v2);
    for (auto i : v33)
    {
        cout << i << " ";
    }
    return 0;
}
