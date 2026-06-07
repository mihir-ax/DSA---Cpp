#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    int y = 5;

    int *p1 = &x;
    int *p2 = &y;

    cout << *p1 + *p2;

    // ------------------

    int *xy = &x, *yz = &y;
    cout << *xy << " " << *yz;

    return 0;
}
