#include <bits/stdc++.h>
using namespace std;

void swap_func(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int x = 5;
    int y = 10;

    swap_func(&x, &y);
    cout << x << " " << y;

    return 0;
}
