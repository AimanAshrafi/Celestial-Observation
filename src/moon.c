#include "moon.h"

// --- leap year check (simple rule you selected) ---
static int is_leap(int year) {
    return (year % 4 == 0);
}

// --- days passed since your reference birthday ---
int daysSinceBirthday(int d, int m, int y) {

    int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;
    int i;

    for(i = 2006; i < y; i++) {
        total_days += 365;
        if(i % 4 == 0) { total_days += 1; }
    }

    for(i = 1; i < m; i++) {
        total_days += month_days[i - 1];
    }

    total_days += d;

    return total_days;
}

int calculateMoonPhase(int day, int month, int year) {
    
    int days = daysSinceBirthday(day, month, year);
    if (days < 0) days = -days;   // safety if reverse date someday

    int moonAge = days % 30;
    const char *phase;

    if (moonAge <= 1)         phase = "New Moon";
    else if (moonAge <= 6)    phase = "Waxing Crescent";
    else if (moonAge <= 8)    phase = "First Quarter";
    else if (moonAge <= 13)   phase = "Waxing Gibbous";
    else if (moonAge <= 16)   phase = "Full Moon";
    else if (moonAge <= 21)   phase = "Waning Gibbous";
    else if (moonAge <= 23)   phase = "Last Quarter";
    else                      phase = "Waning Crescent";

    printf("\nMoon Phase Today: %s (age ≈ %d days)\n", phase, moonAge);

    return moonAge;   // returning phase as index 0–29
}

