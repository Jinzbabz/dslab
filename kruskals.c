#include <stdio.h>
struct Edge {
int u, v, w;
};
int parent[10];
int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}

void unionSet(int a, int b) {
    parent[a] = b;
}

int main() {
    int n, e, i, j;
    struct Edge edges[20], temp;
    int count = 0, cost = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges (u v weight):\n");
    for (i = 0; i < e; i++) {
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
    }

    for (i = 0; i < n; i++)
        parent[i] = i;

    for (i = 0; i < e - 1; i++) {
        for (j = 0; j < e - i - 1; j++) {
            if (edges[j].w > edges[j + 1].w) {
                temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }

    printf("\nEdges in MST:\n");
    for (i = 0; i < e && count < n - 1; i++) {
        int u = find(edges[i].u);
        int v = find(edges[i].v);

        if (u != v) {
            printf("%d -- %d  cost: %d\n",
                   edges[i].u, edges[i].v, edges[i].w);
            cost += edges[i].w;
            unionSet(u, v);
            count++;
        }
    }

    printf("\nTotal cost of MST = %d\n", cost);
    return 0;
}
