#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 21, 35, 48, 85, 69};

    int search = 8;
    bool flag = false;

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        if (search == arr[i])
        {
            cout << i;
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        cout << "-1";
    }

    return 0;
}
