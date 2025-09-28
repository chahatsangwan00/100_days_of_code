#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int sum(int count, ...) {
    int total = 0;
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }

    va_end(args);
    return total;
}

int min(int count, ...) {
    int minimum = INT_MAX;
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int val = va_arg(args, int);
        if (val < minimum) minimum = val;
    }

    va_end(args);
    return minimum;
}

int max(int count, ...) {
    int maximum = INT_MIN;
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int val = va_arg(args, int);
        if (val > maximum) maximum = val;
    }

    va_end(args);
    return maximum;
}