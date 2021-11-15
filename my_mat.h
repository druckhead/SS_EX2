/**
 * @file my_mat.h
 * @author daniel raz, amir gillete
 * @brief 
 * @version 0.1
 * @date 2021-11-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/***************************
 ***************************
 *       HEADER FILE       *
 ***************************
 ***************************/


/****************************************************
*   All functions are assuming input is valid.      *
*   The Matrix is a Square Matrix of size 10x10     *
****************************************************/

/**********************************************************************************************************************
 **************************************Adjacency Matrix****************************************************************
 **********************************************************************************************************************
 * In graph theory and computer science, an adjacency matrix is a square matrix used to represent a finite graph.     *
 * In this case it represents a finite, undirected-weighted graph.                                                    *
 * The elements of the matrix indicate whether pairs of vertices(i,j) are adjacent or not in the graph.               *
 * The values of its cells are either 0 or a positive number.                                                         *
 * A cell (i,j) with value 0 represents that no path exists between vertices i and j.                                 *
 * A cell (i,j) with a positive value represents the weight required to travel from vertice i to vertice j.           *
 **********************************************************************************************************************/


#define VERT 10
#define INFINITY 9999

/**
 * @brief Receive from input the values of the Adjacency Matrix
 */
void init_mat(int arr[VERT][VERT]);

/**
 * @brief 
 * 
 * @param i 
 * @param j 
 * @return true 
 * @return false 
 */

void copy_mat(int mat[VERT][VERT], int tmp[VERT][VERT]);


/**
 * @brief This function receives two integers i, j, which represent the (i,j) cell in an Adjacency Matrix
 *        of an undirected-weighted graph.
 *        Uses a modified Floyd-Warshall algorithm to determine if a path exists.
 *        If a path exists, prints "True"
 *        Otherwise, if a path does not exist, prints "False".
 * @param i matrix row
 * @param j matrix column
 */
void path_exists(int arr[VERT][VERT]);



/**
 * @brief This function receives two integers i, j which represent the cell (i,j) in an Adjacency Matrix
 *        of an undirected-weighted graph.
 *        It Uses the Floyd-Warshall Algorithm to find the shortest path between i to j.
 *        If a path exists, prints the weight of the shortest one,
 *        else if a path doesn't exist, prints -1.
 * @param i matrix row
 * @param j matrix column
 * 
 */
void shortest_path(int adj_mat[VERT][VERT]);