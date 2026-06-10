#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 1, -1, -1, 1, 1, -1, 1, 1};

    int i = 0;
    int j = v.size() - 1;

    while (i < j)
    {
        if (v[i] < 0)
        {
            i++;
        }
        else if (v[j] > 0)
        {
            j--;
        }
        else if (v[i] > 0)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
