#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>

int sumFibs (int argc, char *argv[]){
    if (argc != 2){
        printf("error");
    }

    int num = atoi(argv[1]);
    int first = 0;
    int second = 1;
    int result = 0;

    while (second <=  num){
        if (second % 2 != 0) {
           result += second;
         }

         second += first;
         first = second - first;
    }

     printf("result: %i", result);

}