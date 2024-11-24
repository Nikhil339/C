#include <stdio.h>
#include <time.h>
#include <unistd.h>

#define CLEAR_SCREEN "\033[H\033[J"
#define UPDATE_INTERVAL 1 
#define TIMELEN 9

void print_digital_clock (const char *time_str){
    printf("Current Time: %s\n", time_str);    
}

void get_current_time (char *time_str){
    time_t rawtime;
    time (&rawtime);

    struct tm *timeinfo = localtime (&rawtime);
    char *format = "%.2d:%.2d:%.2d";
    snprintf(time_str, TIMELEN, format, timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
}

void clear_screen(void){
    printf(CLEAR_SCREEN);
}

int main(void){

    char time_str[TIMELEN];
    
    while (1){
        clear_screen();
        get_current_time(time_str);
        print_digital_clock(time_str);
        sleep(UPDATE_INTERVAL);
    }
    return 0;
}