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
    int sampleArr[10] = {0,1,3,3,4,5,6,7,5,9};
    int negSum=0; // negative sum
    for(int i = 0; i < 10; i++){
        if (sampleArr[i]%2==1){
            negSum += sampleArr[i];
        }
    }
    printf("negSum = %d\n", negSum);
return 0;}