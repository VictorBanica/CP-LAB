#include <stdio.h>

int main()

{
    int start_hour, start_minute, start_second, finish_hour, finish_minute, finish_second;
    int run_hour, run_minute, run_second;

    printf("Input starting time (HH:MM:SS): ");
    scanf("%i %i %i", &start_hour, &start_minute, &start_second);
    printf("\nInput finish time (HH:MM:SS): ");
    scanf("%i %i %i", &finish_hour, &finish_minute, &finish_second);

    run_hour = finish_hour - start_hour;
    run_minute = finish_minute - start_minute;
    run_second = finish_second - start_second;

    printf("\nRunning time is: %i:%i:%i", run_hour, run_minute, run_second);
}
