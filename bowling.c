#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main (int argc, char *argv[]){

    if (argc < 0){
        return 1;
    }

    int total = 0;

    // int score = [ ];
    // score = get_string("What is your score array: ");
    // printf("your score array is %s\n", score);

    for (int i=1 ; i < 7; i += 2){

    int firstScore = atoi(argv[i]);
    int secondScore = atoi(argv[i+1]);
    int thirdScore = atoi(argv[i+2]);
    int fourthScore = atoi(argv[i+3]);

    if((firstScore + secondScore) < 10){
             total += (firstScore + secondScore);
         }
    else if (firstScore == 10){
        total += (firstScore + secondScore + thirdScore + fourthScore);
    }

    else if ((firstScore + secondScore) == 10){
        total += (firstScore + secondScore + thirdScore);
    }

    }

    printf("your total %i\n", total);


}