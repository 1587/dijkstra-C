/**
 C program for Dijkstra's single source shortest path algorithm
 for adjacency matrix representation of the graph
**/


#include <stdio.h>
#include "dijkstra.h"




/** A utility function to find the vertex with minimum distance value, from
    the set of vertices not yet included in the shortest path tree
    parameters : dist[] - distance matrix
                 visited[] - set of visited nodes. visited[i] is false if the vertex i is not visited

**/


int minDist(int dist[], bool visited[]){

	
    // implement : find the index of the vertex with the minimum distance, out of
    // all the non-visited vertices and return the index.
	int i,no=8,temp=INFINITY;
	printf("aaa\n\n\n");
	for(i=0;i<V;i++){
		if(dist[i]<temp && visited[i]==0){
			no=i;
			//printf("zz %d\n",temp);	
			temp=dist[i];
			
		}	
	}		
	printf("min value %d %d\n", temp,no);
	return no;
	/*
	int min=INFINITY;
	int i,col=8;
	for(i=0;i<7;i++){
		if(dist[i]<min && visited[i]==0){
			min=dist[i];
			col=i;
			
		}
	}
	printf("min value %d \n\n", min);
	//if all are visited return 8
	return col;
	*/
}

/** Funtion that implements Dijkstra's single source shortest path algorithm
 for a graph represented using adjacency matrix representation.

 parameters : weight - adjacency matrix representation of the graph
              src    - index of the start node
              dist   - distance matrix where the element i corresponds to the distance to vertex i from the src node

 returns    : distance matrix
**/

int* dijkstra(int weight[V][V], int src, int dist[]){


    bool visited[V];

    /**
    Implement : 1. initialize all distances as INFINITY and elements in visited[] as false
                2. get the minimum distance vertex from the un-visited vertices
                3. mark the vertex as visited
                4. update distance values of adjacent vertices of the marked vertex
                5. repeat untill shortest paths are faound for all the vertices.
    **/
	int i,j;
	for(i=0;i<V;i++){
		dist[i]=INFINITY;	//initially assign 1000 to all elements in the array
		visited[i]=false;	//initially assign 0 to all elements in the array
	}
	dist[src]=0;	//make the distance of the vertex  
	//visited[src]=true;
		
	int index;
	
	printf("visited1 %d  \n",visited[0]);
	printf("distances1 %d\n",dist[0]);
	for(i=0;i<V;i++){
									//printf("bbb\n");
		index=minDist(dist, visited); //callin this function returns the minimum distance vertex's address
		visited[index]=true;
		for(j=0;j<V;j++)
			printf("%d ",dist[j]);
		printf("\n");
		for(j=0;j<V;j++){
										//printf("ddd\n");
			//if(visited[j]==0){
				if((weight[index][j]+dist[index] < dist[j]) && visited[j]==0){ //if the distance of a ith node is lesser than the sum of the distance of corrent node and the edge that
					if(weight[index][j])
					{
					dist[j]=weight[index][j]+dist[index];	//connects the current node to the ith edge, the distance of ith node is changed
					}
					//printf("aaa2");
				}
		    //}
	    }
	}
	return dist;
}


/** A utility function to print the distance matrix
    parameters : dist[] distance matrix

**/


void printSolution(int dist[V])
{

   printf("Vertex   Distance from Source\n");
   int i;
   for (i = 0; i < V; i++)
      printf("%d \t\t %d\n", i, dist[i]);
}





