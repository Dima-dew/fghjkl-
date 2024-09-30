#include  <stdio.h>

int  main  (){

    char  soz[1000]  ="salom bolalar  nima  gap";
    for  (int i  = 0;  soz[i]  != '\0'; i ++){
        if  (soz[i]  == 'a' ){
            soz[i]  = 'A';
        }
    }
    puts(soz);
    return  0;
}