#include <iostream>
#include <conio.h>
using namespace std;

void merge(int a[], int l, int m, int h)
{
    int i = l, j = m + 1, k = 0, temp[100];

    while(i <= m && j <= h)
    {
        if(a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while(i <= m)
        temp[k++] = a[i++];

    while(j <= h)
        temp[k++] = a[j++];

    for(i = l, k = 0; i <= h; i++, k++)
        a[i] = temp[k];
}

void mergeSort(int a[], int l, int h)
{
    if(l < h)
    {
        int m = (l + h) / 2;

        mergeSort(a, l, m);
        mergeSort(a, m + 1, h);

        merge(a, l, m, h);
    }
}

int main()
{
    int a[5], i;

    cout << "Enter 5 numbers: ";

    for(i = 0; i < 5; i++)
        cin >> a[i];

    mergeSort(a, 0, 4);

    cout << "Sorted array: ";

    for(i = 0; i < 5; i++)
        cout << a[i] << " ";

    getch();
}
