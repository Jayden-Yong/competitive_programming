// missing_num.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int missingNum(vector<int>& arr) {
    int n = arr.size() + 1;
    int xor1 = 0, xor2 = 0;

    for (int i = 1; i <= n; i++) {
        xor1 ^= i;
    }

    for (int num : arr) {
        xor2 ^= num;
    }

    return xor1 ^ xor2;
}

int main()
{
    vector<int> num = { 1,2,3,5 };
    cout << missingNum(num);
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
