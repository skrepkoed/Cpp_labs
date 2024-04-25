#include "SearchNonprintingSymbols.h"
#include <iostream>
int SearchNonprintingSymbols::search(const string& input)//Подсчет непечатных символов  в файле 
{
    const std::regex regex("[[:cntrl:]&&[:space:]]");
    std::smatch match;
    int count = 0;
    std::string::const_iterator searchStart(input.cbegin());
    while (regex_search(searchStart, input.cend(), match, regex)) {
        count++;
        searchStart = match.suffix().first; // продолжаем поиск с конца текущего совпадения
    }
    return count;
}
