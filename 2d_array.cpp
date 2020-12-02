//2D array - defining and diplaying

#include <iostream>
using namespace std;

int main()
{
    //assigning values to the array
    int arr[5] = {14,15,15,64,45};

    //displaying all elements of 1D array
    cout << "1D" << endl;
    cout << arr[0] << " ";
    cout << arr[1] << " ";
    cout << arr[2] << " ";
    cout << arr[3] << " ";
    cout << arr[4] << " ";

    //defining two dimensional array
    int arr1[2][3] = {{12,13,14},{22,23,24}};

    //using nested for loop
    //to display the elements of 2d array
    cout << "\n\n2D" << endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
