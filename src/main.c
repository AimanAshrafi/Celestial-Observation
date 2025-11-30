#include <stdio.h>
#include <time.h>
#include "visibility.h"
#include "moon.h"
#include "utils.h"

int main() {
    time_t now = time(NULL);          // current time
    struct tm *t = localtime(&now);   // convert to date/time structure

    printf("Today is: %d-%d-%d\n",
        t->tm_mday,
        t->tm_mon + 1,
        t->tm_year + 1900
    );
    //  storing the date for moon phase calculation
    int day   = t->tm_mday;
    int month = t->tm_mon + 1;
    int year  = t->tm_year + 1900;

    location();
    int moonAge = calculateMoonPhase(day,month,year);


     int aqi;
     printf("\nEnter AQI at your location: ");
     scanf("%d",&aqi);

     visibility_with_AQI(hemisphere_choice, moonAge, aqi);

    
    
    return 0;
}

