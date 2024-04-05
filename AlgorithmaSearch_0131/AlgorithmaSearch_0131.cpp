#include <iostream>
using namespace std;

int arr[20]; // Array to be searched
int n; // Number of elements in the array
int i; // Index of array element 

void input()
{
    while (true)
    {
        cout << "Enter the number of element in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray shloud have minimum 1 and maximum 20 elements.\n\n";
    }

   
}

void LinearSearch()
{
    char ch;
    int ctr; // number of comparisons
    int item;

    do
    {
        //accept the number to be searched
        cout << "\nEnter the element you want to search: "; // step 1
        cin >> item;

        

    } while ((ch == 'y') || (ch == 'Y'));

}


