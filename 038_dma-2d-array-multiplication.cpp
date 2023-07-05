// C++ program to perform matrix multiplication
// matrix3[3][3] = matrix1[3][3] * matrix2[3][3]

#include <iostream>

using namespace std;

int main()
{
    int **matrix1;
    int **matrix2;
    int **matrix3;
    int i, j, k;

    matrix1 = new int *[3];
    matrix2 = new int *[3];
    matrix3 = new int *[3];

    for(i=0; i<3; i++)
    {
        matrix1[i] = new int[3];
        matrix2[i] = new int[3];
        matrix3[i] = new int[3];
    }

    cout << "Enter elements of matrix1: " << endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of matrix2: " << endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    cout << "matrix1: " << endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout << matrix1[i][j] << ' ';
        }
        cout << endl;
    }

    cout << "matrix2: " << endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout << matrix2[i][j] << ' ';
        }
        cout << endl;
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            matrix3[i][j] = 0;
            for(k=0; k<3; k++)
            {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "matrix3: " << endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout << matrix3[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
