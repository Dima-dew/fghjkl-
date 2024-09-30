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
    // char  soz[1000];
    // printf("Ismlarni  Kiriting:   ");
    // fgets(soz,  1000,  stdin);
    // FILE *f  =  fopen("w.txt",  "w");
    // fprintf(f, "%s" , soz);
    // fclose(f);
    // //!  Fayl  ichidan  A  harfi  bilan  boshlangan Ismlar
    // FILE *och_F  = fopen("w.txt", "r");
    // char m[1000]="";
    // while (!feof(och_F)){
    //     if  (m[0] ==  'A'  ||  m[0]  == 'a'){
    //         printf("%s\n",  m);
    //     }
    //     fscanf(f,  "%s", m);
    // }
    // fclose  (och_F);

//!  Fayl  ichida  raqam  bor  strni  chiqarish 
    // FILE  *str_f  = fopen  ("str_int.txt", "w");
    // char  serya[300];
    // printf("Matn:   ");
    // fgets(serya, 300,  stdin);
    // fprintf(str_f,  "%s",  serya);
    // fclose (str_f);
    //!===================================
    // FILE  *raqm_str = fopen("str_int.txt", "r");
    // char  str[1000];
    // while (fscanf(raqm_str, "%s", str )  >  0){
    //     //!  1  - usul  
    //     // if(tekshir(str)  ==  true){
    //     //     puts(str);
    //     // }
    //     //!  2 - usul  
    //     for  (int i  = 0;  i <  strlen(str);  i ++){
    //         if  (isdigit(str[i])){
    //             puts(str);
    //         }
    //     }
    // }
    // fclose(raqm_str);

//! Yaratilgan fayl ichidan  o'zida  raqam  qatnashgan eng  uzun so'z
//     FILE  *raqm_str = fopen("str_int.txt", "r");
//     char  str[1000];
//     char  len[100] = "";
//     while (fscanf(raqm_str, "%s", str )  >  0){
//         if  (tekshir(str) ==  true){
//             strcpy(len, str);
//             break;
//         }
//     }
//    while (fscanf(raqm_str, "%s", str )  >  0){
//         if  (tekshir (str) ==  true  &&  strlen(str) >  strlen(len)){
//             strcpy(len, str);
//         }
//     }
//     puts(len);

//!  Fayl  ichidagi  eng  kichik  so'zni  topadigan  dastur
//     FILE  *f1  = fopen("soz.txt",  "w");
//     char  matn[1000];
//     printf("Matnni kiriting:  ");
//     fgets(matn,  1000,  stdin);
//     fprintf(f1, "%s", matn);
//     fclose(f1);
// //! o'qish  chiqarish  
//     FILE  *oqish_f1 =  fopen("soz.txt", "r");
//     if  (oqish_f1  ==  NULL){
//         printf("Fayl  Topilmadi");
//         return  0;
//     }
//     char str[100] = "";
//     fscanf(oqish_f1,  "%s", str);
//     // rewind(oqish_f1);
//     while (!feof(oqish_f1)){
//        char  soz [100];
//        fscanf(oqish_f1,  "%s", soz);
//         if (strlen(soz)  <  strlen(str)){
//             strcpy(str,  soz);
//         }
//     }
//     puts(str);
//     fclose(oqish_f1);


    int  sonlar[5] = {11,3,4,7,9};
    FILE  *raqam_f  =  fopen ("raqam.txt", "w");
    for  (int i  = 0;  i  <  5;  i ++){
        fprintf(raqam_f,  "%d\n",  sonlar[i]);
    }
    fclose(raqam_f);

    FILE  *natija_F = fopen("raqam.txt", "r");
    float  sum  = 0;
    int son,  s = 0;
    while (fscanf(natija_F,  "%d", &son) !=  EOF){
        printf("%d ", son);
        sum  = sum  + son;
        s ++;
    }
    if  (s  > 0){
        float  orta_Arfimetik =  sum  /  s;
        printf("\n\nO'rta  Arfimetik  ==>   %.2f\n",  orta_Arfimetik);
    }else  {
        printf("\n\nFayl  ichida  Raqam  yo'q");
    }
    fclose(natija_F);






    return  0;
}