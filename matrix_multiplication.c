/*
 * matrix_multiplication.c
 *
 * 概要:
 * - 行列の掛け算を行うプログラム
 * - 固定サイズの行列を使い、結果を出力する
 * - 2次元配列とネストループの扱い練習に適している
 */

#include <stdio.h>

#define SIZE 3  // 行列のサイズ (3x3)

void multiplyMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += a[i][k] * b[k][j]; // 行列の掛け算
            }
        }
    }
}

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrixA[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrixB[SIZE][SIZE] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[SIZE][SIZE];

    multiplyMatrices(matrixA, matrixB, result);

    printf("Matrix A:\n");
    printMatrix(matrixA);

    printf("\nMatrix B:\n");
    printMatrix(matrixB);

    printf("\nResult (A * B):\n");
    printMatrix(result);

    return 0;
}
