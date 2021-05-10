#include "Graph.h"
#include <stdio.h>

void Graph(Stu* arr[], int count){
    char gradeName[5] = {'A','B','C','D','F'};
    int check = 0;
    printf("\n---성적 전체 현황(막대그래프)---\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<count; j++){
            if(gradeName[i] == arr[j]->grade){
                printf("=");
                check++;
            }
        }
        if(check > 0)
            printf("  %d %c\n",check, gradeName[i]);
        check = 0;
    }
}