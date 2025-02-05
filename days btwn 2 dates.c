#include <stdio.h>
#include <time.h>
int main() {
    struct tm date1 = {0}, date2 = {0};
    time_t t1, t2;
    double diff;
    printf("Enter first date (YYYY MM DD): ");
    scanf("%d %d %d", &date1.tm_year, &date1.tm_mon, &date1.tm_mday);
    printf("Enter second date (YYYY MM DD): ");
    scanf("%d %d %d", &date2.tm_year, &date2.tm_mon, &date2.tm_mday);
    date1.tm_year -= 1900;
    date2.tm_year -= 1900;
    date1.tm_mon -= 1;
    date2.tm_mon -= 1;
    t1 = mktime(&date1);
    t2 = mktime(&date2);
    diff = difftime(t2, t1) / (60 * 60 * 24);
    printf("Difference = %.0f days\n", diff);
    return 0;
}
