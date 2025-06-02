#ifndef DEVUTS_H
#define DEVUTS_H

#include <stdlib.h> 
#include <stdbool.h>

static inline void clrscr() {
    system("cls || clear");
}

static inline char* printBool(bool b){
    return b  ? "true" : "false";
}

#endif 