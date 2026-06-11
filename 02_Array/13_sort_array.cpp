#include <bits/stdc++.h>
using namespace std;

void sortByMethodOne(vector<int> &v)
{
    int zero = 0;
    int one = 0;
    int two = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            zero++;
        }
        else if (v[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (zero)
        {
            v[i] = 0;
            zero--;
        }
        else if (one)
        {
            v[i] = 1;
            one--;
        }
        else
        {
            v[i] = 2;
        }
    }
}

void sortVector(vector<int> &v)
{

    int low = 0;
    int mid = 0;
    int high = v.size() - 1;

    while (mid <= high)
    {
        if (v[mid] == 0)
        {
            int temp = v[mid];
            v[mid] = v[low];
            v[low] = temp;
            mid++;
            low++;
        }
        else if (v[mid] == 2)
        {
            int temp = v[mid];
            v[mid] = v[high];
            v[high] = temp;
            high--;
        }
        else if (v[mid] == 1)
        {
            mid++;
        }
    }
}

int main()
{
    // Sort vector of 0 1 2;

    vector<int> v = {0, 1, 2, 1, 0, 1, 2, 1, 2};

    sortVector(v);
    // sortByMethodOne(v);

    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}
