#include  <stdio.h>
#include  <stdlib.h>
#include  <ctype.h>
#include  <string.h>
#include <stdbool.h>
bool tekshir(char str[]){
    for  (int i = 0;  i  < strlen(str); i ++){
        if (isdigit(str[i])){
            return  true;    }
    }
    return  false;
}
int main(){ system("cls");
//!  Fayl ichiga  ismlarni  yozish


    int  sonlar[5] = {11,3,4,7,9};
    FILE  *raqam_f  =  fopen ("raqam.txt", "w");
    for  (int i  = 0;  i  <  5;  i ++){
        fprintf(raqam_f,  "%d\n",  sonlar[i]);
    }
    fclose(raqam_f);




    return  0;
}