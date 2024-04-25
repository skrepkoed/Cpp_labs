#include "MyString.h"
#include "CustomString.h"
//����������� ������
MyString::MyString(const char* string)
{
	this->str=CustomString::customStringCopy(str, string);
}
//���������� ������
MyString::~MyString()
{
	delete[] str;
}
//����������� ������ ����� ������ �� ������
MyString::MyString(const MyString& string)
{
	//strcpy_s(str, string.str);
	this->str = CustomString::customStringCopy(str, string.str);
}
//���������� ��������� ������������
MyString& MyString::operator=(const MyString& string)
{
	//strcpy_s(str, string.str);
	this->str = CustomString::customStringCopy(str, string.str);
	return *this;
}
//���������� ��������� + (������������)
MyString& MyString::operator+(const MyString& string)
{
	//strcat_s(str, string.str);
	this->str= CustomString::customStringConcat(str, string.str);
	return *this;
}
//���������� ��������� �����������
int MyString::operator==(const MyString& string)
{
	return CustomString::customStringComparsion(str, string.str);
}
//����������� ������ ����� ������
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

// ���������� ��������� ����� ��8
 std::istream& operator>>(std::istream& is, MyString& str) {
	char temp[1000];
	is >> temp;
	str = MyString(temp);
	return is;
}
 // ���������� ��������� ����� ��8
void MyString::out()
{
	int len = CustomString::customStringLen(str);
	for (size_t i = 0; i < len; i++)
	{
		cout << *(str + i);
	}
	
}
