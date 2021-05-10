#include "Grade.h"
#include "CRUD.h"
#include "Graph.h"
//#include "Search.h"
//#include "File.h"
#include <stdio.h>

int main(){

    Stu *sp[20]; int gradeCut[4] = {90,80,70,60};
    int count = 0,index =0,
        menu;
 
    while (1){
        menu = selectMenu();
        if (menu == 0) break;
        if(menu ==1 || menu ==3|| menu == 4)
            if (count ==0) continue;
        if (menu == 1 ){
            if(count > 0)
                listScore(sp,index);
        }
        else if (menu == 2){
            index += Creat(gradeCut,sp,index);
            ++ count;
        }
        else if (menu == 3 ){
            Update(gradeCut,sp);
        }
        else if (menu == 4 )
            count -= Delete(sp,index);
        else if (menu == 5){
            setGradeCutline(gradeCut);
        }
        else if(menu == 6){
            Graph(sp,index);
        }
    }
    printf("Á¾·áµÊ!\n");
    return 0;
}