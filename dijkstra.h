#define V 10
#define INFINITY 1000
#define false 0
#define true 1

typedef int bool;


int minDist(int dist[], bool visited[]);

int* dijkstra(int weight[V][V], int src, int dist[]);

void printSolution(int dist[]);


