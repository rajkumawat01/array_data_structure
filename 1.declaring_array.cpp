//simple program method to declare integer type array variable

#include <iostream>
using namespace std;
int main()
{
    //declaring array by defining size directly
    int a[5];

    //taking input to array by user
    for(int i=0; i<5; i++)
    {
        cin >> a[i];
    }

    //displaying array
    for(int i=0; i<5; i++)
    {
        cout << a[i] << " ";
    }
}
