#include "CustomStringConcat.h"
#include "CustomStringLen.h"
char* CustomStringConcat::customStringConcat(char* str1, char* str2)
{
    int str1_len = CustomStringLen::customStringLen2(str1);
    int str2_len = CustomStringLen::customStringLen2(str2);
    int length = str1_len + str2_len;
    char* str3 = new char[length+1];
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        str3[i] = str1[i++];
    }

    while (str2[j] != '\0') {
        str3[i++] = str2[j++];
    }
    str3[i] = '\0';

    return str3;
}
