#pragma once
#include <stdlib.h>
#include <string.h>
#ifdef __cplusplus
extern "C"
{
#endif

	typedef struct Matrix
	{
		int rows;
		int cols;
		float* data;
	}Matrix;

	Matrix MatrixCreate(int rows, int cols)
	{
		Matrix m;
		m.rows = rows;
		m.cols = cols;
		m.data = (float*)malloc(rows * cols * sizeof(float));
		memset(m.data, 0, rows * cols * sizeof(float));
		return m;
	}

	void MatrixDestory(Matrix* m)
	{
		free(m->data);
		m->data = NULL;
		m->rows = 0;
		m->cols = 0;
	}
}
