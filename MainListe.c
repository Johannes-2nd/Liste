 //This will become a list to rank my favourite media
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
//#include "Hilfe.h"
;;
char temp_medium[11] = "Buchiiiiiii";
char temp_score[5] = "9.81" ;
char temp_name[31] = "Berserk";
char temp_short_recap[201] = "Hallo du dumme Sau";
char *ptr = "Buch";
int i;
char *ptr_recap = "Hallo du dumme Sau";



int main (){
    /*FILE *fptr;
    fptr = fopen("E:\\MediaListe\\MediaListe.txt", "r+");
    
    if (fptr == NULL){
        printf("Hurensohn! Falscher Pfad angegeben");
        exit(1);
    }

    
    

    for(i=1; i <= 5 ; ++i){
        if(i==1){
            printf("Enter the medium:  ");
            //fgets(temp_medium, sizeof(temp_medium), stdin);
            continue;
        }
        else if (i==2){
            printf("Enter the name: ");
            //fgets(temp_name, sizeof(temp_name), stdin)u;
            continue;
        }
        else if (i==3){
            printf("Enter the score (0-100 points): ");
            //scanf("%f", temp_score); 
            continue;
        }
        else if (i==4){
            printf("Write a little description or your thaughts about the medium \n");
            //fgets(temp_short_recap, sizeof(temp_short_recap), stdin);
            continue;
        }
        else {
            printf("If you want to enter another medium, please enter 1 \n");
            printf("if you want to quit, please enter 0");
            scanf("%d", quit);
        
             if (quit = 1){
                i=1;
                break;
            }
            else if (quit = 2){
                break;
            }
            else {
                printf("Please enter a valid number!");
                continue;
            } THE CODE RUNS, well without the "//" ones 
        }
    } */
    char Liste[1][241] = {0};  

    for (i = 0; i < 240 ; i++){

        if(i <= 10){
            if(*ptr != '\0'){
                Liste[0][i] = *ptr;
                ptr++;
            }
            else{
                Liste[0][i] = ' ';

            }
        }
        
        
        else if(i > 10 && i <= 200){
            if (*ptr_recap != '\0'){
                Liste[0][i] = *ptr_recap;
                ptr_recap++;
            }
            else{
                Liste[0][i] = ' ';
            }
        }
        else {
            break;
        }
    }

    Liste[0][i] = '\0';       
    
    
    for (i = 0; i < 240; i++){
        if (Liste[0][i] == '\0'){
            Liste[0][i] = ' ';
        }
        printf("%c", Liste[0][i]);
            
    }
 
     
    /*fprintf(fptr, "%c", Liste);
    fclose(fptr); */
        
    return 0;
}










