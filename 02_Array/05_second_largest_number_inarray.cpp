#include <bits/stdc++.h>
using namespace std;

int main()
{

    int array[7] = {5, 6, 1, 9, 7, 2, 4};
    int max = array[0];
    int sec_max = array[1];

    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++)
    {
        if (array[i] > max)
        {
            sec_max = max;
            max = array[i];
        }
        else if (array[i] < max && array[i] > sec_max)
        {
            sec_max = array[i];
        }
    }

    cout << "Second largest value in the array is : " << sec_max;

    return 0;
}
