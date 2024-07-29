#include <iostream>
#include "Matrix.h"

int main() 
{
    Matrix m0 = MatrixCreate(2, 2);
    Matrix m1 = MatrixCreate(2, 2);

    m0.data[0] = 1.0f; m0.data[1] = 2.0f;
    m0.data[2] = 3.0f; m0.data[3] = 4.0f;

    m1.data[0] = 5.0f; m1.data[1] = 6.0f;
    m1.data[2] = 7.0f; m1.data[3] = 8.0f;

    std::cout << "Matrix m0:" << std::endl;
    MatrixPrint(&m0);

    std::cout << "Matrix m1:" << std::endl;
    MatrixPrint(&m1);

    Matrix result = MatrixAdd(&m0, &m1);

    std::cout << "Result of m0 + m1:" << std::endl;
    MatrixPrint(&result);

    MatrixDestroy(&m0);
    MatrixDestroy(&m1);
    MatrixDestroy(&result);

    return 0;
}
