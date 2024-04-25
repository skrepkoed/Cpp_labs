#include <iostream>
#include <string>
#include <cstring>
#include <locale>
#include "CustomStringLen.h"
#include "CustomStringCopy.h"
#include "CustomStringComparsion.h"
#include "CustomStringConcat.h"
using namespace std;



int main()
{
    //Определение длины строки(массива символов):
    setlocale(LC_ALL, "Russian");
    char str[] = "Привет, мир!"; // Объявляем и инициализируем строку
    int length = strlen(str); // Вызываем функцию strlen() для вычисления длины строки
    std::cout << "Длина строки: " << length << endl;
    //Конкатенация строк:
    char str1[20] = "Hello, ";
    const char str2[] = "world!";
    strcat_s(str1, str2); // Добавляем содержимое str2 в конец str1
    std::cout << "Результат: " << str1 << endl;
    //Копирование строк:
    char str3[4] = "abc";
    char str4[4] = "def";
    strcpy_s(str3, str4); //Содержимое строки str3  перезаписано содержимым строки str4
    std::cout << "Результат: " << str3 << endl;
    std::cout << "Результат: " << str4 << endl;
    //Сравнение строк:
    const char str5[] = "aab";
    const char str6[] = "aaaaae";

    int result = strcmp(str5, str6);

    if (result == 0)
        std::cout << "Строки идентичны." << endl;
    else if (result < 0)
        std::cout << "Строка str5 меньше строки str6." << endl;
    else
        std::cout << "Строка str5 больше строки str6." << endl;

    //Реализации определения длины строки:
    //Первый спсособ:
    const char str7[] = "ffff";
    const char str8[] = "fffff";
    const char str9[] = "ffffff";
    std::cout << "Длина строки: " << str7 <<": " << CustomStringLen::customStringLen1(str7) << endl;
    //Второй способ:
    std::cout << "Длина строки: " << str8 << ": " << CustomStringLen::customStringLen2(str8) << endl;
    //Третий способ:
    std::cout << "Длина строки: " << str9 << ": " << (sizeof(str9)-1)/sizeof(str9[0]) << endl;


    //Реализация копирования строки:
    char str10[] = "ghi";
    char str11[] = "jkl";
    try
    {
        CustomStringCopy::customStringCopy(str10, str11);
    }
    catch (const char* exception)
    {
        std::cerr << "Error: " << exception << endl;
    }
    
    std::cout << "После применения customStringCopy  "<< "str10: " << str10 << " str11: " <<str11 <<endl;

    //Реализация сравнения строк:

    char str12[] = "aab";
    char str13[] = "aaaaae";

    std::cout << CustomStringComparsion::customStringComparsion(str12, str13)<<endl;

    //Реалиазация конкатенации строк: 

    char str14[] = "aab";
    char str15[] = "aae";

    std::cout << CustomStringConcat::customStringConcat(str14, str15);
    
}




