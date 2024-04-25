#include "MyEncryptor.h"

void MyEncryptor::encrypt(const string& key, const string& filename)
{
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Unable to open input file: " << filename << endl;
        return;
    }

    std::regex regex("^(.*?)(\.[^.]*$|$)"); // Поиск имени файла без расширения
    std::smatch match;
    regex_search(filename, match, regex);

    ofstream outFile(match.str(1)+"_encoded.txt");
    if (!outFile) {
        cerr << "Unable to create output file." << endl;
        inFile.close();
        return;
    }

    char ch;
    int key_length = key.length();// получение длины ключа шифрования
    int counter = 0;
    while (inFile.get(ch))
    {
        if (counter==key_length)
        {
            counter = 0;// обнуление счетчика при циклическом проходе ключа шифрования 
        }
        int int_ch = ch;
        int int_enc_ch = key[counter];
        char encoded_ch = int_ch ^ int_enc_ch;//побитовое "и" шифрующее символ в исходном файле
        outFile << encoded_ch;// запись символа в файл
        counter++;
    }
    inFile.close();
    outFile.close();
}
