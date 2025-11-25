#include <stdio.h>
#include <time.h>

int main() {
    time_t now = time(NULL);          // current time
    struct tm *t = localtime(&now);   // convert to date/time structure

    printf("Today is: %d-%d-%d\n",
        t->tm_mday,
        t->tm_mon + 1,
        t->tm_year + 1900
    );

    return 0;
}
