#ifndef _MAIN_H_
#define _MAIN_H_

void swapChar(char * var1, char * var2) {
    *var1 = *var1 ^ *var2;
    *var2 = *var1 ^ *var2;
    *var1 = *var1 ^ *var2;
}

#endif
