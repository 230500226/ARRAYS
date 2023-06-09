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
    int sampleArr[10]={15,24,15,69,85,14,25,123,4,498};
    int odd[10]={}, even[10]={};
    int oddC=0, evenC=0; //counters
    for (int i=0; i<10; i++){
        if (sampleArr[i]%2==1){
            odd[oddC]=sampleArr[i];
            oddC ++;
        } else {
            even[evenC]=sampleArr[i];
            evenC ++;
        }
    }

    for (int i=0; i<(sizeof(odd)/sizeof(odd[0])); i++){
        printf("odd[%d]=%d\n",i,odd[i]);
    }
    for (int i=0; i<(sizeof(even)/sizeof(even[0])); i++){
        printf("even[%d]=%d\n",i,even[i]);
    }

return 0;}