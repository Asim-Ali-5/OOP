#include <iostream>
using namespace std;
class Matrix
{
private:
    int rows;
    int cols;
    int **data;

public:
    // Constructor
    Matrix(int rows, int cols)
    {
        this->rows = rows;
        this->cols = cols;
        data = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            data[i] = new int[cols];
        }
    }
    // Destructor
    ~Matrix()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] data[i];
        }
        delete[] data;
    };
    // Input function
    void input()
    {
        cout << "Enter the Values" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> data[i][j];
            }
        }
    }
    // Output function
    void output()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
    // Set function
    void set(int row, int col, int value)
    {
        if (row >= 0 && row < rows && col >= 0 && col < cols)
        {
            data[row][col] = value;
        }
        else
        {
            cout << "Index out of bounds." << endl;
        }
    }
    // Taking transpose
    void transpose()
    {
        for (int i = 0; i < cols; i++)
        {
            for (int j = 0; j < rows; j++)
            {
                cout << data[j][i] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int rows, cols, val;
    cout << "Enter the number of rows and cols  " << endl;
    cin >> rows >> cols;
    Matrix m1(rows, cols);

    m1.input();
    m1.output();
    cout << "Transpose of a matrix" << endl;

    m1.transpose();
}