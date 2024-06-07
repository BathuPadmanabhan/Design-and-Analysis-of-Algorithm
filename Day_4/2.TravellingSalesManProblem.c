#include <stdio.h>
#include <limits.h>

#define V 4 

int tsp(int graph[][V], int mask, int pos) {
    if (mask == (1 << V) - 1) {
        return graph[pos][0];
    }
    int city,new_cost;
    int min_cost = INT_MAX;

    for (city = 0; city < V; city++) {
        if ((mask & (1 << city)) == 0) {
            new_cost = graph[pos][city] + tsp(graph, mask | (1 << city), city);
            if (new_cost < min_cost) {
                min_cost = new_cost;
            }
        }
    }

    return min_cost;
}

int main() {
    int graph[V][V] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int start = 0;
    printf("The minimum cost for the Travelling Salesman Problem is: %d\n", tsp(graph, 1, start));

    return 0;
}
