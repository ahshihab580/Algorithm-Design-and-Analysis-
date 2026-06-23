#include <iostream>
#include<conio.h>
using namespace std;

void quickSort(int arr[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[(low + high) / 2];
    int temp;

    while(i <= j)
    {
        while(arr[i] < pivot)
        {
            i++;
        }

        while(arr[j] > pivot)
        {
            j--;
        }

        if(i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
            j--;
        }
    }

    if(low < j)
    {
        quickSort(arr, low, j);
    }

    if(i < high)
    {
        quickSort(arr, i, high);
    }
}

int main()
{
    int arr[5], i;

    cout << "Enter 5 numbers: ";

    for(i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, 4);

    cout << "Sorted array: ";

    for(i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    getch();
}
