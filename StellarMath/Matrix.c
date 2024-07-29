#include "Matrix.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

Matrix MatrixCreate(int rows, int cols)
{
	Matrix m;
	m.rows = rows;
	m.cols = cols;
	m.data = (float*)malloc(rows * cols * sizeof(float));
	memset(m.data, 0, rows * cols * sizeof(float));
	return m;
}

void MatrixDestroy(Matrix* m)
{
	free(m->data);
	m->data = NULL;
	m->rows = 0;
	m->cols = 0;
}

Matrix MatrixAdd(const Matrix* m0, const Matrix* m1)
{
	if (m0->rows != m1->rows || m0->cols != m1->cols)
	{
		fprintf(stderr, "Matrix dimensions must match for addition\n");
		exit(EXIT_FAILURE);
	}

	Matrix result = MatrixCreate(m0->rows, m1->cols);

	for (int i = 0; i < m0->rows * m1->cols; ++i)
	{
		result.data[i] = m0->data[i] + m1->data[i];
	}

	return result;
}

Matrix MatrixSub(const Matrix* m0, const Matrix* m1)
{
	if (m0->rows != m1->rows || m0->cols != m1->cols)
	{
		fprintf(stderr, "Matrix dimensions must match for subtraction\n");
		exit(EXIT_FAILURE);
	}

	Matrix result = MatrixCreate(m0->rows, m0->cols); 

	for (int i = 0; i < m0->rows * m0->cols; ++i) 
	{
		result.data[i] = m0->data[i] - m1->data[i];
	}

	return result;
}


void MatrixPrint(const Matrix* m)
{
	for (int i = 0; i < m->rows; ++i) {
		for (int j = 0; j < m->cols; ++j) {
			printf("%6.2f ", m->data[i * m->cols + j]);
		}
		printf("\n");
	}
}