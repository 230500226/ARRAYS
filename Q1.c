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
    printf("Please input your 10 numbers into the array \n");

    int userNum[10];
    // int dataTypeSize = sizeof(userNum) / sizeof(userNum[0]);
    int i = 0;
    for(i=0;i<10;i++) {
        printf("Your number %d :", i);
        scanf("%d", &userNum[i]);
    }
    printf("\nYour array is : \n\n");
    for(i=0;i<10;i++) {
        printf("userNum[%d] is %d \n", i, userNum[i]);
    }
return 0;
}
