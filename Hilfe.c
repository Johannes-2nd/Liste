#include"Hilfe.h"
#include<stdio.h>
#include<stdlib.h>


/*void add_entry (int i, char temp_medium[10], char temp_name[30], float temp_score, char temp_short_recap){
    int quit;
    int i = 1;
    int quit_num = 1;
    for(i=1; i<=5; i++){
    if(i==1){
        printf("Enter the medium: ");
        fgets(temp_medium, sizeof(temp_medium), stdin);
    }
    else if (i==2){
        printf("Enter the name: ");
        fgets(temp_name, sizeof(temp_name), stdin);
    }
    else if (i==3){
        printf("Enter the score (0-100 points): ");
        scanf("%f", temp_score);
    }
    else if (i==4){
        printf("Write a little description or your thaughts about the medium \n");
        fgets(temp_short_recap, sizeof(temp_short_recap), stdin);
    }
    else {
        printf("If you want to enter another medium, please enter 1 \n");
        printf("if you want to quit, please enter 0");
        scanf("%d", quit);
        
         if (quit = 1){
            i=1;
        }
        else if (quit = 2){
            break;
        }
        else {
            printf("Please enter a valid number!");
            continue;
        }
    } 
}
} */

void List_enter(char* ptr, char* ptr_recap, char Liste[1][241]){
    int i;

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
}

void List_print (char Liste[1][241]){
    int i;
     for (i = 0; i < 240; i++){
        if (Liste[0][i] == '\0'){
            Liste[0][i] = ' ';
        }
        printf("%c", Liste[0][i]);
            
    }
}