#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {5, 9, 5, 2, 3, 7, 9};
    int x = 9;
    int last = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (x == v[i])
        {
            last = i;
        }
    }

    cout << "Last Occurence : " << last;
    return 0;
}
