// elementInRange.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int checkElements(int arr[], int n, int A, int B) {
    int range = B - A;

    for (int i = 0; i < n; i++) {
        if (abs(arr[i]) >= A && abs(arr[i]) <= B) {
            int z = abs(arr[i]) - A;

            if (z < n && arr[z] > 0) {
                arr[z] = arr[z] * -1;
            }
        }
    }

    int count = 0;
    for (int i = 0; i <= range && i < n; i++) {
        if (arr[i] > 0) return false;
        count++;
    }

    if (count != (range + 1)) return false;
    return true;
}

int main()
{
    int num[] = { 1,4,5,2,7,8,3 };
    bool result = checkElements(num, 7, 2, 5);
    cout << boolalpha << result;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
