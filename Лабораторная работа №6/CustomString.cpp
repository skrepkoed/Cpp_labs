#include "CustomString.h"

int CustomString::customStringComparsion(const char* str1, const char* str2)
{
	while (*str1 != '\0' && *str2 != '\0')
	{
		int str1_number = *str1;
		int str2_number = *str2;
		int counter = 0;
		if (str1_number == str2_number)
		{
			str1+counter;
			str2+counter;
		}

		if (str1_number < str2_number)
		{
			return -1;
		}

		if (str1_number > str2_number) {
			return 1;
		}
		counter++;
	}
	return 0;
}

char* CustomString::customStringConcat(char* str1, char* str2)
{
    int str1_len = customStringLen(str1);
    int str2_len = customStringLen(str2);
    int length = str1_len + str2_len;
    char* str3 = new char[length + 1];
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

char* CustomString::customStringCopy(char* destination, const char* source)
{
	destination = new char[customStringLen(source)+1];
	int len = customStringLen(source);
	for (size_t i = 0; i < len ; i++)
	{
		destination[i] = *source;
		source++;
	}
	destination[len] = '\0';

	return destination;
}

int CustomString::customStringLen(const char* str)
{
	int length = 0;
	while (*str != '\0') {
		length++;
		str++;
	}
	return length;
}
