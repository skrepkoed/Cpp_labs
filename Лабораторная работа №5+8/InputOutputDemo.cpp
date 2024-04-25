#include <iostream>
#include <fstream>
#include <string>
#include "SearchNonprintingSymbols.h"
#include "SearchSubstringInFile.h"
#include "MyTextFormater.h"
#include "MyEncryptor.h"
using namespace std;
int main()
{
	MyTextFormater::formatText("text.txt");//Форматирование текста по заданию 4
	MyEncryptor::encrypt("ehgi", "example.txt");//Шифровка текста по заданию 5
	ofstream MyFile("result.txt");
	string myText;
	int totalNonprintingSymbols = 0;
	ifstream MyReadFile("test.txt");
	if (MyReadFile)
	{
		while (getline(MyReadFile, myText)) {
			cout << myText <<endl;
			totalNonprintingSymbols+= SearchNonprintingSymbols::search(myText);//Поиск непечатных символов
			MyFile<< "Found matches: " << SearchSubstringInFile::search("ello", myText)<<endl; //Подсчет подстрок
		}
		MyReadFile.close();
		MyFile.close();
	}
	else
	{
		cout << "File doesnt exists";
	}
	cout << totalNonprintingSymbols;
	

}

