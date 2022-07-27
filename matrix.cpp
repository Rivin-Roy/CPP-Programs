//CPP PROGRAM TO PERFORM SPARSE MATRIX OPERATIONS 
#include <iostream>
#include <conio.h>
using namespace std;

void getMatrix(int matrix[10][10], int &row, int &col, int matrixNum) {
    int nofZeros = 0, i, j;
    cout<<"\nEnter number of Rows and Cols in Matrix"<<matrixNum<<": ";   cin>>row>>col;    //Getting oreder of matrix
    cout<<"Enter Matrix"<<matrixNum<<":-\n";
    for (i=0; i<row; i++) {
        for (j=0; j<col; j++) {    
            cin>>matrix[i][j];     //Getting each element of Matrix
            if (matrix[i][j] == 0) {   nofZeros++;   }   //Counting number of zeros to check for sparse matrix 
        }     
    }    
    if (nofZeros < (row*col)/2) {   //Majority of elements are non-zero so its not a sparse matrix
        cout<<"ERROR: Entered Matrix is not a sparse matrix";
        getch();  exit(0);    //Exiting program
    }
}
void addMatrix(int a[10][10], int aRow, int aCol, int b[10][10], int bRow, int bCol) {
    if (aRow != bRow || aCol != bCol) {  //Order of both matrix is not same so it cannot be added
        cout<<"ERROR: Order of matrix must be equal to be added";
        getch();  return;
    }
    cout<<"After adding, Result Matrix is:-\n";
    for (int i=0; i<aRow; i++) {
        for (int j=0; j<aCol; j++) {   cout<<a[i][j]+b[i][j]<<" ";    }     //Adding and displaying corresponding elements of both matrices 
        cout<<endl;
    }
}
void multiplyMatrix(int a[10][10], int aRow, int aCol, int b[10][10], int bRow, int bCol) {
    if (aCol != bRow) {     //Order of both matrix do not satisfy to perform multiplication
        cout<<"ERROR: Multiplication cannot be preformed beacase of inappropiate Order of matrices";
        getch();  return;
    }
    cout<<"After Multiplication, Matrix is:-\n";
    for (int i=0; i<aRow; i++) {
        for (int j=0; j<aCol; j++) {
            int k=0, sum=0;
            for (; k<aCol; k++) {   sum+=a[i][k]*b[k][j];   }   //Calculating Sum of product of corresponding elements of both matrices
            cout<<sum<<" ";     //Displaying sum which is the resultant element
        }
        cout<<endl;
    }
}
void transposeMatrix(int matrix[10][10], int row, int col, int matrixNum) {    //Displays transposed from of matrix by interchanging rows and columns
    cout<<"Transpose of Matrix"<<matrixNum<<" is:-\n";
    for (int i=0; i<col; i++) {
        for (int j=0; j<row; j++) {    cout<<matrix[j][i]<<" ";      }     
        cout<<endl;
    }
}
void dispMatrix(int matrix[10][10], int row, int col, int matrixNum) {  //Displays elements of Matrix whose name is matrixNum
    cout<<"\nMatrix is"<<matrixNum<<":-\n";
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {    cout<<matrix[i][j]<<" ";      }    //Displaying elements 
        cout<<endl;
    }
}
int main() {
    int a[10][10], aRow, aCol, b[10][10], bRow, bCol, i, j, choice;
    getMatrix(a, aRow, aCol, 1);     getMatrix(b, bRow, bCol, 2);    //Getting both Matrix1 & Matrix2
    do {        
        system("cls");
        cout<<"\tSPARSE MATRIX OPERATIONS";
        dispMatrix(a, aRow, aCol, 1);    dispMatrix(b, bRow, bCol, 2);   //Displaying entered matrices
        cout<<"\n1. Addition.\n2. Multiplication.\n3. Transpose.\n4. Exit.\nEnter your choice: ";   cin>>choice;
        if (choice<1 || choice>3) {  //Exit condition
            return 0;
        } else if (choice == 1) {  //Addition of matrix a and b
            addMatrix(a, aRow, aCol, b, bRow, bCol);
        } else if (choice == 2) {  //Multiplication of matrix a and b
            multiplyMatrix(a, aRow, aCol, b, bRow, bCol);
        } else if (choice == 3) {  //Transposed form of matrix a and b
            transposeMatrix (a, aRow, aCol, 1);   transposeMatrix (b, bRow, bCol, 2); 
        }
        getch();
    } while (true);
}
