#include "moon.h"

int calculateMoonPhase(int day, int month, int year) 
{
    
    return 0; // placeholder for now

}

int daysSinceBirthday(int d, int m, int y);
{
    int totalDays = 0;
    int i;
        // Days in each month (non-leap year)
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // Counting whole years passed since 2006
    for(i = 2006; i < y; i++) 
    {
        total_days += 365;

        // leap year logic
        if(i % 4 == 0) {
            total_days += 1;
        }
    }

}
