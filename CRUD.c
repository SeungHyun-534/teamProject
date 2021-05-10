#include "CRUD.h"
#include "Grade.h"
#include <stdio.h>
#include <stdlib.h>

int Create(int gradeCut[],Stu* arr[],int index){ //예정대로 성적을 주는 함수를 만들었으나 파라미터로 성적컷이 필요해서 C와 U에 파라미터를 변경하였습니다. 
    arr[index] = (Stu*)malloc(sizeof(Stu));

    printf("학생의 이름을 입력해주세요 :");
    scanf("%s",arr[index]->name);
    printf("학생의 학번을 입력해주세요 :");
    scanf("%d",&arr[index]->id);
    printf("중간고사 성적 : ");
    scanf("%f",&arr[index]->midterm);
    printf("기말고사 성적 : ");
    scanf("%f",&arr[index]->final);
    printf("과제점수 : ");
    scanf("%f",&arr[index]->hw);
    setGrade(gradeCut,arr,index);

    return 1;
}

void Read(Stu* arr[],int index){ //학번은 우리학교처럼 8자리로 생각하고 만들었습니다. 
    printf("N0. 이름   학번      중간고사 기말고사 과제 성적\n");
    printf("===============================================\n");
    for(int i=0;i<index;i++){
        if(arr[i] == NULL) continue;
        printf("%2d. %3s %8d  %4.1f     %4.1f     %4.1f   %c\n",i+1,arr[i]->name,arr[i]->id,arr[i]->midterm,arr[i]->
        final,arr[i]->hw,arr[i]->grade);
    }
}

//함수 내에서 index값을 입력받게 하여 CRUD.h 에서 Update부분 인자값 수정했습니다.
void Update(int gradeCut[],Stu* arr[]){
    int index;
    printf("수정을 원하는 번호를 입력해주세요 :");
    --index;
    scanf("%d",&index);
    printf("학생의 이름을 입력해주세요 :");
    scanf("%s",arr[index]->name);
    printf("학생의 학번을 입력해주세요 :"); //저희가 학번을 아예 까먹고 있었네요 ㅎㅎ 모두 추가해서 수정했습니다. 
    scanf("%d",&arr[index]->id);
    printf("중간고사 성적 : ");
    scanf("%f",&arr[index]->midterm);
    printf("기말고사 성적 : ");
    scanf("%f",&arr[index]->final);
    printf("과제점수 : ");
    scanf("%f",&arr[index]->hw);
    setGrade(gradeCut,arr,index);
    printf("==>수정되었습니다.\n");
}

int Delete(Stu* arr[],int index){
    int check;
    printf("정말로 삭제하시겠습니까?(예 : 1, 아니오 : 2)");
    scanf("%d",&check);

    if(check == 1){
        free(arr[index]); // 삭제를 동적할당 해제로 변경하였습니다. 확인해주세요
        arr[index] = NULL;
        printf("==> 삭제되었습니다.\n");
        return 1;
    }
    else if(check == 2){
        printf("취소되었습니다.\n");
    }

    return 0; // 삭제가 된 경우에는 1을 , 그렇지 않은 경우에는 0을 리턴하도록 수정(main의 index값을 변경하기 위함)하였습니다.
    
}
