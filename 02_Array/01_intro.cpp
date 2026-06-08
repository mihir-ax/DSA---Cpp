#include <bits/stdc++.h>
using namespace std;

int main()
{
    // putting value to all elements array.
    int arr[7] = {0, 0, 0, 0, 0, 0, 0};

    // cout << &arr[0] << " " << &arr[1];

    // for (auto i : arr)
    // {
    //     cout << i << " ";
    // }

    // Ques: Given an array of marks of students, if the marks of any student is less than 35 print its roll number.
    // [roll number here refers to the index of the array.]

    int marks[] = {50, 40, 90, 25, 60, 30, 20};

    for (int i = 0; i < 7; i++)
    {
        if (marks[i] < 35)
        {
            cout << i << " ";
        }
    }

    cout << "\n\n\n";

    // getting length of array from sizeof operator !!

    int length_of_marks = sizeof(marks) / sizeof(marks[0]);
    cout << length_of_marks;

    return 0;
}
