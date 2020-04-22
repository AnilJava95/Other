/*
  Name: 1358130030
  Copyright:
  Author: Anýl Ertürk
  E-Mail: anilerturk1@gmail.com
  Date: 01.12.2015 23:43
  Description: Finds all possible routes from a starting node to an end node that is picked by the user.
  
  	NOT: 3 ten 1 e giderken 3-0-2-1 i bulmuyor. 0 dan 3 e giderken 0-2-1-3 yolunu yazdýrýyor 0-2-3 yazmasý
  	   	lazýmken. 
  
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

find_routes2(int start, int finish, char route[9], char route_temp[9],
             int mark[4], int graph[4][4])
{
    int i;
    char route_temp2[9];

    for(i = 0; i < 4; i++) {
        if (graph[start][i] != 0 && mark[i] != 0) {
            sprintf(route_temp2, "-> %d", i);
            strcat(route, route_temp2);
            if (i == finish) {
                printf("\nRoute: %s\n", route);
                strcpy(route, route_temp);
            } else {
                mark[start] = 0;
                find_routes2(i, finish, route, route_temp, mark, graph);
            }
        }
    }
}

find_routes(int start, int finish, char route[9], char route_temp[9],
            int mark[4], int graph[4][4])
{
    int i;
    char route_temp2[9];

    for (i = 0; i < 4; i++) {
        if (graph[start][i] != 0 && mark[i] != 0) {
            sprintf(route_temp2, "-> %d ", i);
            strcat(route, route_temp2);

            if (i == finish) {
                printf("\nRoute: %s\n\n", route);
            } else {
                mark[start] = 0;
                find_routes2(i, finish, route, route_temp, mark, graph);
            }
            memset(mark, 1, 4*sizeof(int));
            strcpy(route, route_temp);
        }
    }
}

int main()
{
    int graph[4][4] = { { 0, 1, 1, 1 }, { 1, 0, 1, 0 },
                        { 1, 1, 0, 1 }, { 1, 0, 1, 0 } };
    int mark[4] = { 1, 1, 1, 1 };
    char route[9];
    char route_temp[9];
    int i, j;

    printf("NOTE: This code is working in devc++ but it has problems \n"
           "in visual studio because of different functions\n\n");
    printf("This is the graph(nodes are 0, 1, 2 ,3):\n\n0-1-2-3\n\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n\n");
    }

    printf("Select a starting node from \"0, 1, 2 ,3\": ");
    scanf("%d", &i);

    sprintf(route, "-> %d", i);

    strcpy(route_temp, route);

    printf("\nSelect a different ending node from \"0, 1, 2 ,3\""
           "(if you dont get any results it\n"
           "means either you entered wrong numbers or there are no routes): ");
    scanf("%d", &j);
    if (i == j || i > 3 || j >3 || i < 0 || j < 0) {
        printf("\nStart and finish nodes are same or wrong number(s) have"
               " been entered. Please try \nagain.\n");
        exit(1);
    }
    find_routes(i, j, route, route_temp, mark, graph);
    system("pause");
}
