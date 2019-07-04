#include <stdio.h>

char* weekDay(int);

int main() {
    int n = 0;
    int m, d;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &m, &d);
        int dayOfYear = 0;
        if (m == 1) {
            printf("%s\n", weekDay(d));
        }
        else if (m == 2) {
            dayOfYear = 31 + d;
            printf("%s\n", weekDay(dayOfYear));
        }
        else if (m >= 3 && m <= 8) {
            dayOfYear = 31 + 28;
            for (int i = 3; i < m; i++) {
                dayOfYear += 30;
                if (i % 2 == 1) dayOfYear++;
            }
            printf("%s\n", weekDay(dayOfYear+d));
        }
        else {
            dayOfYear = 243;
            for (int i = 9; i < m; i++) {
                if (i % 2 == 0) dayOfYear++;
                dayOfYear += 30;
            }
            printf("%s\n", weekDay(dayOfYear+d));
        }

    }

    return 0;
}

char* weekDay(int i) {
    int f = i % 7;
    switch (f) {
    case 0:
        return "Friday";
        break;
    case 1:
        return "Saturday";
        break;
    case 2:
        return "Sunday";
        break;
    case 3:
        return "Monday";
        break;
    case 4:
        return "Tuesday";
        break;
    case 5:
        return "Wednesday";
        break;
    case 6:
        return "Thursday";
        break;
    }

}
