#include "MyString.h"
#include "CustomString.h"
//Конструктор строки
MyString::MyString(const char* string)
{
	this->str=CustomString::customStringCopy(str, string);
}
//Деструктор строки
MyString::~MyString()
{
	delete[] str;
}
//Конструктор строки через ссылку на строку
MyString::MyString(const MyString& string)
{
	//strcpy_s(str, string.str);
	this->str = CustomString::customStringCopy(str, string.str);
}
//Перегрузка оператора присваивания
MyString& MyString::operator=(const MyString& string)
{
	//strcpy_s(str, string.str);
	this->str = CustomString::customStringCopy(str, string.str);
	return *this;
}
//Перегрузка оператора + (конкатенация)
MyString& MyString::operator+(const MyString& string)
{
	//strcat_s(str, string.str);
	this->str= CustomString::customStringConcat(str, string.str);
	return *this;
}
//Перегрузка оператора сравненения
int MyString::operator==(const MyString& string)
{
	return CustomString::customStringComparsion(str, string.str);
}
//Определение метода длины строки
int MyString::length()
{
	return CustomString::customStringLen(str);
}

void MyString::in()
{
	cin >> str;
}

 std::ostream& operator<<(std::ostream& os, const MyString& string) {
	os << string.str;
	return os;
}

// Перегрузка оператора ввода ЛР8
 std::istream& operator>>(std::istream& is, MyString& str) {
	char temp[1000];
	is >> temp;
	str = MyString(temp);
	return is;
}
 // Перегрузка оператора ввода ЛР8
void MyString::out()
{
	int len = CustomString::customStringLen(str);
	for (size_t i = 0; i < len; i++)
	{
		cout << *(str + i);
	}
	
}
