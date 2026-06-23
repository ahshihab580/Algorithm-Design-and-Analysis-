#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int graph[4][4] =
    {
        {0,1,1,0},
        {1,0,1,1},
        {1,1,0,0},
        {0,1,0,0}
    };

    int visited[4] = {0};
    int queue[10], front = 0, rear = 0;

    int start = 0;

    visited[start] = 1;
    queue[rear++] = start;

    cout << "BFS Traversal: ";

    while(front < rear)
    {
        int node = queue[front++];

        cout << node << " ";

        for(int i = 0; i < 4; i++)
        {
            if(graph[node][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }

    getch();
}
