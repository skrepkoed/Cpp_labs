#include <iostream>
#include<iomanip>
#include<random>
#include<stdlib.h>
#include<conio.h>
#include "MatrixSorter.h"
#include "MatrixStatistic.h"

int main() {
    const int N = 3;
    using namespace std;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, 100);
    int matrix[N][N];

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            matrix[i][j] = dis(gen);
        }
    }

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            cout << " " << matrix[i][j];
        }
        cout << endl;
    }



    MatrixStatistic mst;
    MatrixSorter msort;
    cout << " " << mst.matrixMeanValue(*matrix, 3);
    cout << " " << mst.closestToMeanValue(*matrix, 3);
    cout << " " << msort.matrixMax(*matrix, 3);

}




