#include "MyTextFormater.h"

void MyTextFormater::formatText(const string& filename)//Форматирование текстовового файла в соотствии с требованиями
{
    //Из задания 4
	ifstream inFile(filename);
    if (!inFile) {
        cerr << "Unable to open input file: " << filename << endl;
        return;
    }

    ofstream outFile("output.txt");
    if (!outFile) {
        cerr << "Unable to create output file." << endl;
        inFile.close();
        return;
    }

    string line;
    string pageNumber;
    bool pageNumberFound = false;

    while (getline(inFile, line)) {
        if (!line.empty() && line[0]=='\f') { // Проверка на новую страницу
            if (!pageNumber.empty()) {
                outFile << pageNumber << endl<< '\f' << endl; //Запись номера страницы в конце страницы
                pageNumber.clear();
            }
            pageNumberFound = false;
        }
        else {
            if (!pageNumberFound) { // Если номер страницы еще не найден
                size_t startPos = line.find_first_of("0123456789");//Поиск первой цифры в строке
                if (startPos != string::npos) {
                    size_t endPos = line.find_last_of("0123456789");//Поиск последней цифры в строке
                    pageNumber = line.substr(startPos, endPos - startPos + 1);//Получение подстроки содержащей номер страницы
                    pageNumberFound = true;
                    continue;
                }
            }
            outFile << line << endl; // Запись строки в новый файл
        }
    }

    // Write the last page number if any
    /*if (!pageNumber.empty()) {
        outFile << pageNumber << endl;
    }*/

    inFile.close();
    outFile.close();
}
