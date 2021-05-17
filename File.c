#include "File.h"
#include <stdio.h>

int load(Stu* arr[]){
    int count=0;
    FILE * f;
    f = fopen("Student.txt","r");
    if( f == NULL){
        printf("=> 파일 없음\n\n");
        return count;
    }
    else{
        while(1){
        arr[count] = (Stu*)malloc(sizeof(Stu));
        fscanf(f,"%s %d %f %f %f %c",arr[count]->name, &arr[count]->id, &arr[count]->midterm,&arr[count]->final,&arr[count]->hw,&arr[count]->grade);
        if(feof(f)) break;
        count++;
        }
        fclose(f);
        printf("=> 로딩 성공!\n\n");
        return count;
    }
}

void save(Stu* arr[], int count){
    FILE *f;
    f = fopen("Student.txt","w");
    
    for(int i=0; i<count; i++){
        if(arr[i] == NULL) continue;
        fprintf(f,"%s %d %f %f %f %c\n",arr[i]->name, arr[i]->id, arr[i]->midterm,arr[i]->final,arr[i]->hw,arr[i]->grade);
    }
    fclose(f);
    printf("=> 저장됨\n");
}