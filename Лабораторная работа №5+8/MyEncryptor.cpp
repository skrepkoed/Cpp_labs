#include "MyEncryptor.h"

void MyEncryptor::encrypt(const string& key, const string& filename)
{
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Unable to open input file: " << filename << endl;
        return;
    }

    std::regex regex("^(.*?)(\.[^.]*$|$)"); // ����� ����� ����� ��� ����������
    std::smatch match;
    regex_search(filename, match, regex);

    ofstream outFile(match.str(1)+"_encoded.txt");
    if (!outFile) {
        cerr << "Unable to create output file." << endl;
        inFile.close();
        return;
    }

    char ch;
    int key_length = key.length();// ��������� ����� ����� ����������
    int counter = 0;
    while (inFile.get(ch))
    {
        if (counter==key_length)
        {
            counter = 0;// ��������� �������� ��� ����������� ������� ����� ���������� 
        }
        int int_ch = ch;
        int int_enc_ch = key[counter];
        char encoded_ch = int_ch ^ int_enc_ch;//��������� "�" ��������� ������ � �������� �����
        outFile << encoded_ch;// ������ ������� � ����
        counter++;
    }
    inFile.close();
    outFile.close();
}
