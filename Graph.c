#include "Graph.h"
#include <stdio.h>

void Graph(Stu* arr[], int count){
    char gradeName[5] = {'A','B','C','D','F'};
    int check = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<count; j++){
            check = 0;
            if(gradeName[i] == arr[j]->grade){
                printf("=");
                check++;
            }
        }
        printf("  %d %c\n",check, gradeName[i]);
    }
}