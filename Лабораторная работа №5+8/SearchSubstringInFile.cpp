#include "SearchSubstringInFile.h"

int SearchSubstringInFile::search(const string& substring, const string& input)
{
    const std::regex regex(substring);
    std::smatch match;
    int count=0;
    std::string::const_iterator searchStart(input.cbegin());
    while (regex_search(searchStart, input.cend(), match, regex)) {
        count++;
        searchStart = match.suffix().first; // продолжаем поиск с конца текущего совпадения
    }
    return count;

}
