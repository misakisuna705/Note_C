#include <string.h>

#include "main.h"
#include "misakiString.h"

void reverseString(char * str) {
    int i = 0, j = strlen(str) - 1;

    while (i < j) {
        swapChar(str + i, str + j);

        i++;
        j--;
    }
}
