#include <iostream>
using namespace std;

int main()
{

    int r, c;
    cout << "Programt to add martix" << endl
         << "Enter the rows of matrix  ";
    cin >> r;
    cout << "Enter the columns of matrix  ";
    cin >> c;
    int A[r][c], B[r][c], C[r][c];
    cout << "Enter the elements of the matrix " << r << " X " << c << endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> A[i][j];

    cout << "Enter the elements of the second matrix " << r << " X " << c << endl;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> B[i][j];

    // Adding both the matrix

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++){
            C[i][j] = A[i][j] + B[i][j];
            cout<<C[i][j];
            if(C[i][j]<10){

                            cout<<"  ";
            }
            else 
                cout<<" ";
            }
            cout<<endl;
    }

    return 0;
}