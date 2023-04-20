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
        int twoD[3][3] = { 
        {1,2,3},
        {2,3,4},
        {5,6,7}
    };
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("twoD[%d][%d] = %d\n", i, j, twoD[i][j]);
        }
    }
      int determinant = twoD[0][0] * ((twoD[1][1]*twoD[2][2]) - (twoD[2][1]*twoD[1][2])) -twoD[0][1] * (twoD[1][0]
   * twoD[2][2] - twoD[2][0] * twoD[1][2]) + twoD[0][2] * (twoD[1][0] * twoD[2][1] - twoD[2][0] * twoD[1][1]);

    printf("The determinant of the array twoD is %d", determinant);
return 0;}