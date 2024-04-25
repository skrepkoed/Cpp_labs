#include "MyTextFormater.h"

void MyTextFormater::formatText(const string& filename)//�������������� ������������ ����� � ��������� � ������������
{
    //�� ������� 4
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
        if (!line.empty() && line[0]=='\f') { // �������� �� ����� ��������
            if (!pageNumber.empty()) {
                outFile << pageNumber << endl<< '\f' << endl; //������ ������ �������� � ����� ��������
                pageNumber.clear();
            }
            pageNumberFound = false;
        }
        else {
            if (!pageNumberFound) { // ���� ����� �������� ��� �� ������
                size_t startPos = line.find_first_of("0123456789");//����� ������ ����� � ������
                if (startPos != string::npos) {
                    size_t endPos = line.find_last_of("0123456789");//����� ��������� ����� � ������
                    pageNumber = line.substr(startPos, endPos - startPos + 1);//��������� ��������� ���������� ����� ��������
                    pageNumberFound = true;
                    continue;
                }
            }
            outFile << line << endl; // ������ ������ � ����� ����
        }
    }

    // Write the last page number if any
    /*if (!pageNumber.empty()) {
        outFile << pageNumber << endl;
    }*/

    inFile.close();
    outFile.close();
}
