#include <bits/stdc++.h>
using namespace std;

void display(int arr[])
{
    cout << "Display Function : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    display(arr);
    arr[1] = 100;
    display(arr);

    // ---------------------------

    cout << arr << "\n";
    cout << &arr << "\n";
    cout << arr + 1 << "\n";
    cout << &arr[0] << "\n";
    cout << &arr[1] << "\n";

    int *ptr = arr;
    ptr[0] = 5;
    display(arr);
    // int *ptr1 = &arr;

    return 0;
}
