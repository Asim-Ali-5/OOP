#include <iostream>
using namespace std;
class Matrix
{
private:
    int rows, cols;
    int **arr;

public:
    // Dynamic allocation through a constructor
    Matrix(int rows, int cols)
    {
        
        this->rows = rows;
        this->cols = cols;
        arr = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            arr[i] = new int[cols];
        }
    }
    // Destructor
    ~Matrix()
    {
        cout << "Destructor called. " << endl;
        for (int i = 0; i < rows; i++)
        {
            delete[] arr[i];
        }
        delete[] arr;
    }
    // Input function
    void input()
    {
        cout << "Enter the values. " << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    //Ouput function
    void output()
    {
        cout << "---------Matrix------------- " << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << arr[i][j] <<" ";
            }
            cout<<endl;
        }
    }
    // Set value at a specific point function
    void set(int r, int c, int val)
    {
       
        if (r >= 0 && r < rows && c >= 0 && c < cols)
        {
            arr[r][c] = val;
        }
        else
        {
            cout << "It is out of bound !" << endl;
        }
    }
};
int main(){
    cout<<"Enter matrix size."<<endl;
    int rows,cols,value;
    cin>>rows>>cols;
    Matrix m1(rows,cols);
    
    m1.input();
    m1.output();
    cout<<"Enter values you wanna change in matrix."<<endl;
    cin>>rows>>cols>>value;
    
    m1.set(rows,cols,value);
    m1.output();
    



}