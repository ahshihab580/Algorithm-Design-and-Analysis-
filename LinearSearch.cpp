#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;    // Variable to store the number of elements
    cin >> size; // Taking input for array size

    int numbers[size]; // Declaring an array with given size
    for (int index = 0; index < size; index++)
    {
        cin >> numbers[index]; // Taking input for each element of the array
    }

    int targetValue;
    cin >> targetValue; // Taking input for the value to search

    bool isFound = false; // Flag variable to track whether the value is found

    for (int index = 0; index < size; index++)
    {
        // Checking if current element matches the target value
        if (numbers[index] == targetValue)
        {
            isFound = true; // If match is found, set flag to true
            break;          // Stop searching after finding the value
        }
    }

    // Output result based on search status
    if (isFound == true)
    {
        cout << "Yes\n"; // Print Yes if value is found
    }
    else
    {
        cout << "No\n"; // Print No if value is not found
    }

    return 0; // End of program
}