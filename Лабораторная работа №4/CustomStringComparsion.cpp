#include "CustomStringComparsion.h"

int CustomStringComparsion::customStringComparsion(const char* str1, const char* str2)
{
  
	while (*str1!='\0'&&*str2!='\0')
	{
		int str1_number = *str1;
		int str2_number = *str2;
		if (str1_number==str2_number)
		{
			str1++;
			str2++;
		}

		if (str1_number<str2_number)
		{
			return -1;
		}
		
		if(str1_number > str2_number) {
			return 1;
		}
	}
	return 0;
}
