#include <stdio.h>
#include <stdarg.h>

int addingNumbers(int nHowMany, ...);

int main(void) {
    printf("\n Variadic functions:\n");
    printf("\n 10 + 20 = %d", addingNumbers(2, 10, 20));
    printf("\n 10 + 20 + 30 = %d", addingNumbers(3, 10, 20, 30));
    printf("\n 10 + 20 + 30 + 40 = %d", addingNumbers(4, 10, 20, 30, 40));
    printf("\n");

    return 0;
}

int addingNumbers(int nHowMany, ...) {
    int nSum = 0;

    va_list intArgumentPtr;
    va_start(intArgumentPtr, nHowMany);

    for (int i = 0; i < nHowMany; i++) {
        nSum += va_arg(intArgumentPtr, int);
    }

    va_end(intArgumentPtr);

    return nSum;
}