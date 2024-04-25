#include "SearchNonprintingSymbols.h"
#include <iostream>
int SearchNonprintingSymbols::search(const string& input)//������� ���������� ��������  � ����� 
{
    const std::regex regex("[[:cntrl:]&&[:space:]]");
    std::smatch match;
    int count = 0;
    std::string::const_iterator searchStart(input.cbegin());
    while (regex_search(searchStart, input.cend(), match, regex)) {
        count++;
        searchStart = match.suffix().first; // ���������� ����� � ����� �������� ����������
    }
    return count;
}
