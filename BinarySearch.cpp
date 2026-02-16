#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;    // Variable to store number of elements
    cin >> size; // Taking input for array size

    int numbers[size]; // Declaring array with given size
    for (int index = 0; index < size; index++)
    {
        cin >> numbers[index]; // Taking input for each array element
    }

    int targetValue;
    cin >> targetValue; // Taking input for the value to search

    sort(numbers, numbers + size); // Sorting the array in ascending order (required for binary search)

    bool isFound = false; // Flag to track whether the target is found

    int left = 0;         // Left boundary of search space
    int right = size - 1; // Right boundary of search space

    while (left <= right)
    {
        int middle = (left + right) / 2; // Calculating middle index

        if (numbers[middle] == targetValue)
        {
            isFound = true; // Target found
            break;          // Stop searching
        }
        else if (numbers[middle] > targetValue)
        {
            right = middle - 1; // Search in left half
        }
        else
        {
            left = middle + 1; // Search in right half
        }
    }

    // Printing result
    if (isFound == true)
    {
        cout << "Yes\n"; // If target is found
    }
    else
    {
        cout << "No\n"; // If target is not found
    }

    return 0; // End of program
}