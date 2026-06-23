#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arr[5], i, j, min, temp;

    // Input array
    cout << "Enter 5 numbers: ";

    for(i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // Selection Sort
    for(i = 0; i < 5 - 1; i++)
    {
        min = i;

        for(j = i + 1; j < 5; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // Print sorted array
    cout << "Sorted array: ";

    for(i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    getch();
}
