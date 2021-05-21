//This is a new comment

#include <iostream>
using namespace std;

void output_matrix(int mat[2][2])
{
    int x, y;
    for (x = 0; x < 2; x++) {
        for (y = 0; y < 2; y++) {
            cout << mat[x][y] << "\t";
        }
        cout << "\n";
    }
}

void calculate_matrix(int mat1[2][2], int mat2[2][2], char oper8r)
{
    int matrixC[2][2];
    int x, y;
    for (x = 0; x < 2; x++) {
        for (y = 0; y < 2; y++) {
            if (oper8r == '+') {
                matrixC[x][y] = mat1[x][y] + mat2[x][y];
            }
            else {
                matrixC[x][y] = mat1[x][y] - mat2[x][y];
            }
        }
    }

    cout << "\nMatrix A " << oper8r << " Matrix B:\n";
    output_matrix(matrixC);
}

int main()
{
    int matrixA[2][2], matrixB[2][2], matrixC[2][2];
    int i, j;
    char oper8r = '.';

    //input for matrixA
    cout << "Enter 4 integer values for Matrix A:\n";

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cin >> matrixA[i][j];
        }
    }

    //input for matrixB
    cout << "Enter 4 integer values for Matrix B:\n";

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cin >> matrixB[i][j];
        }
    }

    cout << "\nMatrix A:\n";
    output_matrix(matrixA);
    cout << "\nMatrix B:\n";
    output_matrix(matrixB);

    while (oper8r != '+' && oper8r != '-') {
        cout << "\nPlus or Minus?\t";
        cin >> oper8r;
    }

    calculate_matrix(matrixA, matrixB, oper8r);
}