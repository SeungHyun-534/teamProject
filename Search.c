#include "Search.h"
#include <stdio.h>
#include <string.h>

void search(Stu* arr[],int count){ //아직 미완성
    int no;
    printf("\n       ***검색기***\n");
    printf("----------------------\n");
    printf("1 : 이름으로 검색\n");
    printf("2 : 학번으로 검색\n");
    printf("3 : 최종 성적(범위)으로 검색\n");
    printf("4 : Grade로 검색\n");
    printf("0 : 취소\n");

    printf("원하는 검색 넘버를 입력하세요 : ");
    scanf("%d",&no);

    switch (no)
    {
    case 1:
        searchName(arr,count);
        break;
    case 2:
        searchId(arr,count);
        break;
    case 3:
        searchTotal(arr,count);
        break;
    case 4:
        searchGrade(arr,count);
        break;
    case 0:
        return;
    default:
        printf("잘못된 입력입니다!!! \n 0~4 의 정수를 입력해 주세요.");
        break;
    }
}

void searchName(Stu* arr[],int count){
    char name [20];
    printf("검색할 이름을 입력해주세요 :");
    scanf("%s",name);
    printf("\n--------------검색 결과-------------\n");
    printf("N0. 이름   학번      중간고사 기말고사 과제 성적\n");
    printf("===============================================\n");
    for(int i=0;i<count;i++){
        if(arr[i] == NULL) continue;
        if(strstr(arr[i]->name,name))
            printf("%2d. %3s %8d  %4.1f     %4.1f     %4.1f   %c\n",i+1,arr[i]->name,arr[i]->id,arr[i]->midterm,arr[i]->
            final,arr[i]->hw,arr[i]->grade);
    }
}