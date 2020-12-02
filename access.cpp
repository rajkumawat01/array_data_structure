//this program is to show
//how to declare array data structure
//and access an array

#include <iostream>
using namespace std;

int main()
{
    // declaring array of size 5
    int arr[5];

    // defining values to the array
    arr[0]=10;
    arr[1]=12;
    arr[2]=14;
    arr[3]=34;
    arr[4]=12;

    //displaying all values of t
    //he array using for loop
    for(int i=0; i<5; i++)
    {
        cout << arr[i] << endl;
    }


}
