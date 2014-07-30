#include <stdio.h>
#include <stdlib.h>
#include "dijkstra.h"


int main()
{

  // adjecency matrix representation of the graph

    int graph[V][V] ={{ 0,     6,     0,     0,     0,     0,     6,     0,     0,     0},
     {5,     0,    0,     0,   100,     0,    43,     0,     0,     0},
    {74,     0,     0,     0,     8,     2,     0,     0,     0,     0},
     {0,     0,     0,     0,     0,     0,     0,     4,     0,     6},
     {0,     0,     7,     0,     0,     0,    64,     1,     0,     0},
     {0,     0,     5,     0,     0,     0,     0,     0,     0,     0},
     {9,    96,     0,     0,     0,     0,     0,     0,     5,     0},
     {0,     0,     0,    10,     3,     0,     0,     0,     0,     0},
     {0,     0,     0,     0,     0,    74,     7,     0,     0,     4},
     {0,     0,     0,     6,     0,     0,     0,     0,     5,     0}};

    int d[V];  // distance matrix

    dijkstra(graph, 0,d); // find shortest paths from node 0

    printSolution(d);

    return 0;
}
