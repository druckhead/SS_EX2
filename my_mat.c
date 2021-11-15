/**
 * @file my_mat.c
 * @author daniel raz, amir gillete
 * @brief 
 * @version 0.1
 * @date 2021-11-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <stdbool.h>
#include "my_mat.h"

#define min_val(i,j) ( shrt_dist[i][j] = ( ( shrt_dist[i][j] < shrt_dist[i][k] + shrt_dist[k][j] ) ? shrt_dist[i][j] : shrt_dist[i][k] + shrt_dist[k][j] ) )

//for testing
void printMat(int arr[VERT][VERT]) {
    for (int i = 0; i < VERT; i++) {
        for (int j = 0; j < VERT; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void init_mat(int adj_mat[VERT][VERT]) {
    for (int i = 0; i < VERT; i++) {
        for (int j = 0; j < VERT; j++) {
            fscanf(stdin, "%d", &adj_mat[i][j]);
        }
    }   
}

//todo fix
void path_exists(int adj_mat[VERT][VERT]) {
    int i=0,j=0;
    fscanf(stdin, "%d %d", &i, &j);
    int shrt_dist[VERT][VERT];
    copy_mat(adj_mat, shrt_dist);
    // for all vertices
    for (int k = 0; k<VERT; k++){
        for(int i = 0; i<VERT; i++) {
            for(int j = 0; j<VERT;j++) {
                min_val(i,j);
            }
        }
    }
    // printMat(shrt_dist);
    // if shortest path exists, obviously path exists
    if (shrt_dist[i][j] == INFINITY || !shrt_dist[i][j]) {
        // no path exists;
        printf("%s\n", "False");
    }
    else {
        // path exists
        printf("%s\n", "True");
    }
}

// copy the matrix into a new one
void copy_mat(int adj_mat[VERT][VERT], int tmp[VERT][VERT]) {
    for(int i = 0; i<VERT; i++) {
        for(int j = 0; j<VERT;j++) {
            if (adj_mat[i][j]) {
                tmp[i][j] = adj_mat[i][j];
            }
            else {
                if (i!=j) {
                    tmp[i][j] = INFINITY;
                }
                else {
                    tmp[i][j] = 0;
                }
            }
        }
    }
}

void shortest_path(int adj_mat[][VERT]) {  
    int i=0,j=0;
    fscanf(stdin, "%d %d", &i, &j);
    int shrt_dist[VERT][VERT];
    copy_mat(adj_mat, shrt_dist);
    // for all vertices
    for (int k = 0; k<VERT; k++){
        for(int i = 0; i<VERT; i++) {
            for(int j = 0; j<VERT;j++) {
                min_val(i,j);
            }
        }
    }
    // printMat(shrt_dist);
    if (shrt_dist[i][j] == INFINITY || !shrt_dist[i][j]) {
        // no path exists;
        printf("%d\n", -1);
    }
    else {
        // print the weight of the shortest path
        printf("%d\n", shrt_dist[i][j]);
    }
}