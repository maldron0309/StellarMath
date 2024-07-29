#include <iostream>
#include <iomanip>
#include "Matrix.h"

void PrintMatrix(const Matrix* m) {
    for (int i = 0; i < m->rows; ++i) {
        for (int j = 0; j < m->cols; ++j) {
            std::cout << std::setw(6) << m->data[i * m->cols + j] << ' ';
        }
        std::cout << std::endl;
    }
}

int main()
{
    Matrix m0 = MatrixCreate(2, 2);
    Matrix m1 = MatrixCreate(2, 2);

    m0.data[0] = 1.0f; m0.data[1] = 2.0f;
    m0.data[2] = 3.0f; m0.data[3] = 4.0f;

    m1.data[0] = 5.0f; m1.data[1] = 6.0f;
    m1.data[2] = 7.0f; m1.data[3] = 8.0f;

    std::cout << "Matrix m0:" << std::endl;
    PrintMatrix(&m0);

    std::cout << "Matrix m1:" << std::endl;
    PrintMatrix(&m1);

    Matrix result = MatrixAdd(&m0, &m1);
    Matrix result1 = MatrixSub(&m0, &m1);

    std::cout << "Result of m0 + m1:" << std::endl;
    PrintMatrix(&result);

    std::cout << "Result of m0 - m1:" << std::endl;
    PrintMatrix(&result1);

    MatrixDestroy(&m0);
    MatrixDestroy(&m1);
    MatrixDestroy(&result);
    MatrixDestroy(&result1);

    return 0;
}
