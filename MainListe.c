 //This will become a list to rank my favourite media
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
//#include "Hilfe.h"
;;
char temp_medium[11];
char temp_score[5] ;
char temp_name[31];
char temp_short_recap[201];
char *ptr = "Buch";
char *ptr_recap = "Hallo du dumme Sau";



int main (){
    FILE *fptr;
    fptr = fopen("E:\\MediaListe\\MediaListe.txt", "r+");
    
    if (fptr == NULL){
        printf("Hurensohn! Falscher Pfad angegeben");
        exit(1);
    }


    int decision;

    printf("Enter a number\n
            1 = add to list \n
            2 = read list\n
            3 = sort list\n");

    scanf("%d", decision)

    switch (decision){

        case 1:
        //statement
        break;

        case 2:
        //statement
        break;
        
        case 3:
        //statement
        break;

        default:
        printf("Bro... wrong fckin' number. Are you stupid?!")

    }
    




    fprintf(fptr, "%c", Liste);
    fclose(fptr); 
        
    return 0;
}











