#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arr[5], i, j, temp;

    // Input array
    cout << "Enter 5 numbers: ";

    for(i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // Insertion Sort
    for(i = 1; i < 5; i++)
    {
        temp = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }

    // Print sorted array
    cout << "Sorted array: ";

    for(i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    getch();
}
