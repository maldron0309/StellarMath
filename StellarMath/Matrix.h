#pragma once

#ifdef __cplusplus
extern "C" 
{
#endif

    typedef struct Matrix
    {
        int rows;
        int cols;
        float* data;
    } Matrix;

    Matrix MatrixCreate(int rows, int cols);
    void MatrixDestroy(Matrix* m);
    Matrix MatrixAdd(const Matrix* m0, const Matrix* m1);
    Matrix MatrixSub(const Matrix* m0, const Matrix* m1);
    void MatrixPrint(const Matrix* m);

#ifdef __cplusplus
}
#endif
