/************* AUTHOR INFO **************/
// Name: Shahied Rustin
// Student No.: 230500226
// Course Title: Software Design 1 (SDN150S)
// Date: 20/04/2023
/************* HEADER FILES ***************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/************* GLOBAL VARIABLES ************/
// state global variable if any
/******** FUNCTIONS (DECLARE/DEFINE) *********/
//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;
/************* MAIN FUNCTION**************/
int main(){
    int arr[5][2] = {{0,0},{1,2},{2,4},{3,6},{4,8}};
    int i, j;

    for (i=0; i<5; i++){
        for (j=0;j<2;j++){
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
    printf("Val at arr[2][1] is %d\n",arr[2][1]);
return 0;}  