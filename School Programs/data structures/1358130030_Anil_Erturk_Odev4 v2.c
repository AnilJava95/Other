/*
   Description: Finds all possible routes from a starting node to an end node
                that is picked by the user. This code was taken from stack
                overflow. 

   NOTE: This code is working in devc++ but it has problems in visual studio
          because of different functions.
         Ayrýca tam çalýþmýyor. 3 ten 1 e giderken 3-0-2-1 i bulmuyor.
         	0 dan 3 e giderken 0-2-1-3 yolunu yazdýrýyor 0-2-3 yazmasý
         	lazýmkenç

*/

#include <stdio.h>
#include <stdlib.h>

void display_route (int route[4], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf (", ");
        }
    printf ("%d", route[i]);
    }
    printf ("\n");
}

void find_routes_helper (const int graph[4][4], int finish,
                         int route[4], int n, int mark[4])
{
    // I is the last vertex of ROUTE
    int i = route[n - 1];
    int j;

    // if ROUTE ends at FINISH, the search is over
    if (i == finish) {
        display_route (route, n);
        return;
    }

    // for each vertex J adjacent to I that is not already in ROUTE
    for (j = 0; j < 4; j++) {
        if (!mark[j] && graph[i][j]) {
            // add J to ROUTE
            route[n] = j;
            n++;
            mark[j] = 1;
            // search routes that begin with ROUTE
            find_routes_helper (graph, finish, route, n, mark);
            // backtrack : remove J from ROUTE
            n--;
            mark[j] = 0;
        }
    }
}

void find_routes (const int graph[4][4], int start, int finish)
{
    int i;
    int route[4];
    int n;
    int mark[4];

    // set things up so that ROUTE consists exactly of START
    route[0] = start;
    n = 1;
    for (i = 0; i < 4; i++) {
        mark[i] = 0;
    }
    mark[start] = 1;

    find_routes_helper (graph, finish, route, n, mark);
}

int main ()
{
    int graph[4][4] = {
        { 0, 1, 1, 1 },
        { 1, 0, 1, 0 },
        { 1, 1, 0, 1 },
        { 1, 0, 1, 0 }
    };
    int i, j;

    printf("This is the graph (nodes are 0, 1, 2 ,3):\n\n0-1-2-3\n\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    printf ("\n");

    printf("Select a starting node from \"0, 1, 2 ,3\": ");
    scanf("%d", &i);

    printf("\nSelect a different ending node from \"0, 1, 2 ,3\" (if"
           " you don't get any results it means either you entered"
           " wrong numbers or there are no routes): ");
    scanf("%d", &j);
    if (i == j || i > 3 || j > 3 || i < 0 || j < 0) {
        printf("\nStart and finish nodes are same or wrong number(s) "
               " have been entered. Please try again.\n");
        exit(1);
    }

    find_routes (graph, i, j);
    return 0;
}
