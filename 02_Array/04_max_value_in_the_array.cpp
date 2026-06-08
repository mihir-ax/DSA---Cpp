#include <bits/stdc++.h>
using namespace std;

int main()
{

    int array[7] = {5, 6, 1, 8, 6, 2, 4};
    int max = array[0];

    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    cout << "Max value in the array is : " << max;

    return 0;
}
