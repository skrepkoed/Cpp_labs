#include "CustomStringCopy.h"
#include "CustomStringLen.h"

char* CustomStringCopy::customStringCopy( char* destination, const char* source)
{
	
	if (CustomStringLen::customStringLen2(destination)!=CustomStringLen::customStringLen2(source))
	{
		throw "destiination string  has wrong size";
	}

	while (*destination!='\0')
	{
		*destination = *source;
		destination++;
		source++;
	}

	return destination;

}
