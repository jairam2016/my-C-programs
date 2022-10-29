#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct linked_list
{
    struct node *head;
};

struct Graph
{
    int V; //NODES REPRESENTED AS V
    struct linked_list *array;
};

struct node *creation_of_node(int V)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = V;
    temp->next = NULL;
    return temp;
}

struct Graph *creation_of_graph(int V)
{
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->array = (struct linked_list *)malloc(sizeof(struct linked_list) * V);

    for (int i = 0; i < V; i++)
    {
        graph->array[i].head = NULL;
    }
    return graph;
}

void add_edge(struct Graph *graph, int src, int dest)
{
    struct node *temp = creation_of_node(dest);
    temp->next = graph->array[src].head;
    graph->array[src].head = temp;
}

void print_graph(struct Graph *graph)
{
    for (int j = 0; j < graph->V; j++)
    {
        struct node *trav = graph->array[j].head;
        printf("\n ADJACENY LIST OF VERTEX %d\n head", (j));
        while (trav != NULL)
        {
            printf("->%d", trav->data);
            trav = trav->next;
        }
        printf("\n");
    }
}

int main()
{
    int V = 5;
    struct Graph *graph = creation_of_graph(V);
    add_edge(graph, 0, 1);
    add_edge(graph, 0, 3);
    add_edge(graph, 0, 2);
    add_edge(graph, 0, 4);
    add_edge(graph, 0, 5);
    add_edge(graph, 1, 2);
    add_edge(graph, 1, 3);
    add_edge(graph, 1, 4);
    add_edge(graph, 2, 3);
    add_edge(graph, 2, 4);
    add_edge(graph, 3, 5);
    add_edge(graph, 4, 3);
    add_edge(graph, 4, 0);
    print_graph(graph);

    return 0;
}