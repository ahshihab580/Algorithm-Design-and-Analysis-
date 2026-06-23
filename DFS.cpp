#include <iostream>
#include<conio.h>
using namespace std;

int graph[4][4] =
{
    {0,2,1,0},
    {1,0,1,1},
    {1,2,0,0},
    {0,1,0,0}
};

int visited[4] = {0};

void DFS(int node)
{
    visited[node] = 1;

    cout << node << " ";

    for(int i = 0; i < 4; i++)
    {
        if(graph[node][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

int main()
{
    cout << "DFS Traversal: ";

    DFS(0);

    getch();
}
