#include "CRUD.h"
#include <stdio.h>
#include <stdlib.h>

int Create(Stu* arr[],int index){
    arr[index] = (Stu*)malloc(sizeof(Stu));

    printf("학생의 이름을 입력해주세요 :");
    scanf("%s",arr[index]->name);
    printf("중간고사 성적 : ");
    scanf("%f",arr[index]->midterm);
    printf("기말고사 성적 : ");
    scanf("%f",arr[index]->final);
    printf("과제점수 : ");
    scanf("%f",arr[index]->hw);

    //grade를 주는 함수를 추후에 만들고 넣을 예정

}
