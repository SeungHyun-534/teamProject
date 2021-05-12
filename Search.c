#include "Search.h"
#include <stdio.h>

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