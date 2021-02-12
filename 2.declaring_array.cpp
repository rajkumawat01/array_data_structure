//simple program to declare integer type array variable
//user defined size

#include <iostream>
using namespace std;
int main()
{
    //declaring array
    //user-defined size of the array
    int n=10;

    //taking input for the size of the array
    cin >> n;

    //declaring array
    //size of the array is user-defined
    int a[n];

    //taking input to array by user
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    //displaying array
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}
