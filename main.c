/**
 * @file main.c
 * @author daniel raz, amir gillete
 * @brief 
 * @version 0.1
 * @date 2021-11-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "my_mat.h"

int main(int argc, char const *argv[])
{
    char ch = 0; int flag = 1; int mat[VERT][VERT];
    while (flag) {
        ch = getchar();
        if (ch == 'A'){
            init_mat(mat);
        }
        else if(ch == 'B'){
            path_exists(mat);
        }
        else if(ch == 'C') {
            shortest_path(mat);
        }
        else if(ch == 'D'){
            flag = 0;
        }
    }
    return 0;
}
