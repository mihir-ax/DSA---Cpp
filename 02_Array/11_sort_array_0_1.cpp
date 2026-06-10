#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Ques : Sort the array of 0's and 1's.

    vector<int> v = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1};
    // method 1
    // =======================
    // sort(v.begin(), v.end());

    // method 2
    // =======================
    // two pass method :-
    // iterate over array and count number of one and number of zero and then reiterate over the array and put 0 and 1 exactly number of times !!
    int zero = 0;
    int one = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            zero++;
        else if (v[i] == 1)
            one++;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (zero > 0)
        {
            v[i] = 0;
            zero--;
        }
        else
        {
            v[i] = 1;
            one--;
        }
    }

    // method 3
    // =======================

    int j = 0;
    int k = v.size() - 1;
    // while (j < k)
    // {
    //     if (v[k] == 1)
    //         k--;

    //     else if (v[j] == 1)
    //     {
    //         v[j] = 0;
    //         v[k] = 1;
    //         j++;
    //         k--;
    //     }
    //     else if (v[j] == 0)
    //     {
    //         j++;
    //     }
    // }

    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}
