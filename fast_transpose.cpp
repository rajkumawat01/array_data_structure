//code for fast transpose operation on sparse matrix

#include <iostream>
#define MAX 100
using namespace std;

int main()
{
    //for triplet form
    int arow,acol,q;
    int arr[MAX][MAX],a[MAX][3],b[MAX][3];


    cout << "Enter the row and col for matrix A : ";
    cin >> arow >> acol;
    q = 1;

    //entering row, col, data to represent in triplet form
    cout << "\nEnter the matrix value: ";
    for(int i=0; i<arow; i++)
    {
        cout << "\nRow  : " << i+1 << "\n";
        for(int j=0; j<acol; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 0)
            {
                continue;
            }

            else
            {
                a[q][0] = i;
                a[q][1] = j;
                a[q][2] = arr[i][j];
                q++;
            }
        }
    }

    //displaying input array
    cout << "\nGiven matrix : \n";
    for(int i=0; i<arow; i++)
    {
        for(int j=0; j<acol; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    //displaying triplet form
    a[0][0] = arow;
    a[0][1] = acol;
    a[0][2] = q-1;
    cout << "\ntriplet form : \n";
    cout << "\nRow\tColumn\tValue\n";
    for(int i=0; i<=q-1; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

    //fast transpose
    int row_terms[100],  start_pos[100];
    int i,  j,  p;

    int numTerms = a[0][2];
    int numCols = a[0][1];

    b[0][0] = numCols;
    b[0][1] = a[0][0];
    b[0][2] = numTerms;
    if(numTerms>0)
    {
        for(i =0; i<numCols;  i++)
            row_terms[i] = 0;

        for(i=1; i<=numTerms; i++)
            row_terms[a[i][1]]++;

        start_pos[0]=1;

        for(i=1; i<numCols; i++)
            start_pos[i] = start_pos[i-1] + row_terms[i-1];

        for(i=1; i<=numTerms; i++)
        {
            j = start_pos[a[i][1]]++;
            b[j][0] = a[i][1];
            b[j][1] = a[i][0];
            b[j][2] = a[i][2];
        }
    }
    cout << "\nThe Fast Transpose sparse matrix is:\n";
    cout << "\nRow\tColumn\tValue\n";
    for(p=0; p<=a[0][2]; p++)
    {
        cout << b[p][0] << "\t";
        cout << b[p][1] << "\t";
        cout << b[p][2] << "\t";
        cout << "\n";
    }
    return 0;
}
