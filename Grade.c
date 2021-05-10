#include "Grade.h"
#include  <stdio.h>

//하나의 데이터에 대해서만 grade를 적용하도록 만들어 보았습니다. 

void setGrade(int gradeCut[],Stu* arr[],int index){
    int total = arr[index]->midterm + arr[index]->final + arr[index]->hw;
    if(total >= gradeCut[0]) arr[index]->grade = 'A';
    else if(total >= gradeCut[1]) arr[index]->grade = 'B';
    else if(total >= gradeCut[2]) arr[index]->grade = 'C';
    else if(total >= gradeCut[3]) arr[index]->grade = 'D';
    else arr[index]->grade = 'F';
}

void setGradeCutline(int gradeCut[]){
    for(int i=0;i<4;i++){
        printf("몇점까지 %c로 하시겠습니까?\n",'A'+i);
        scanf("%d",&gradeCut[i]);
    }
    printf("커트라인이 재설정되었습니다.\n");
}