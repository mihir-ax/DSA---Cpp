#include <bits/stdc++.h>
using namespace std;

void find_first_and_last(int n)
{
    cout << "Last digit = " << n % 10 << "\n";
    int first_digit = 0;

    while (n > 0)
    {
        first_digit = n % 10;
        n /= 10;
    }
    cout << "First digit = " << first_digit;
}

int main()
{
    // Write a function to find out the first and last digit of a number without returning anything.

    int n = 8569;
    find_first_and_last(n);
    return 0;
}
