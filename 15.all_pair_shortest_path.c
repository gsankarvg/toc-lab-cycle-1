#include <stdio.h>
#include <stdlib.h>

#define MAX_V 10
#define INF 999

void printSolution(int dist[][MAX_V], int V) {
    printf("The following matrix shows the shortest distances between every pair of vertices \n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                printf("%7s", "INF");
            else
                printf("%7d", dist[i][j]);
        }
        printf("\n");
    }
}

void floydWarshall(int dist[][MAX_V], int V) {
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
}

void readAdjacencyMatrix(int graph[][MAX_V], int V) {
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("Enter weight of edge (%d, %d): ", i, j);
            scanf("%d", &graph[i][j]);
            if (graph[i][j] < 0) {
                printf("Error: Weight cannot be negative.\n");
                exit(1);
            }
            if (graph[i][j] == 0 && i != j) {
                graph[i][j] = INF;
            }
        }
    }
}

int main() {
    int V;
    printf("Enter the number of vertices (max %d): ", MAX_V);
    scanf("%d", &V);

    if (V <= 0 || V > MAX_V) {
        printf("Error: Invalid number of vertices.\n");
        return 1;
    }

    int graph[V][MAX_V];
    readAdjacencyMatrix(graph, V);

    floydWarshall(graph, V);
    printSolution(graph, V);

    return 0;
}