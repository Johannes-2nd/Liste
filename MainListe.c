/* //This will become a list to rank my favourite media
#include <stdio.h> 
#include <stdlib.h>
#include "Hilfe.h"

char temp_medium[10];
float temp_score;
char temp_name[30];
char temp_short_recap[200];





int main (){
FILE *fptr;
fptr = fopen("E:\\MediaListe\\MediaListe.txt", "r+");

if (fptr == NULL)
{
    printf("Hurensohn! Falscher Pfad angegeben");
    exit(1);
}


int quit;
int i = 1;
int quit_num = 1;

for(i=1; i<=6; i++){
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
         

}
*/









