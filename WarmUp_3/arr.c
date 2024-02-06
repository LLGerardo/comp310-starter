#include <stdio.h>  

int main(int argc, int *argv[]){
    int[] numbers = {}
    int sum = 0;
    double avg = 0;

    for(int i=1; i < argc; i++){
        sum += argv[i];
    }
    double avg = (double)sum/argv
    printf("Sum: %d", sum);
    printf("Average: %f", avg)
}