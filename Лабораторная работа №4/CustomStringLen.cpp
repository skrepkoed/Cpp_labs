#include "CustomStringLen.h"

int CustomStringLen::customStringLen1(const char* str)
{
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int CustomStringLen::customStringLen2(const char* str)
{
    const char* start = str;
    while (*str != '\0') {
        
        str++;
    }
    return str - start;
}
/*
int CustomStringLen::customStringLen3(const char(&str)[])
{
    return  sizeof(str) / sizeof(str[0]);
}
*/