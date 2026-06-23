#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n = 4;

    // Adjacency Matrix
    int graph[4][4] =
    {
        {0,1,1,0},
        {1,0,1,1},
        {1,1,0,0},
        {0,1,0,0}
    };

    cout << "Adjacency Matrix:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << graph[i][j] << " ";
        }

        cout << endl;
    }

    // Adjacency List
    cout << "\nAdjacency List:\n";

    cout << "0 -> 1 2" << endl;
    cout << "1 -> 0 2 3" << endl;
    cout << "2 -> 0 1" << endl;
    cout << "3 -> 1" << endl;

    getch();
}
