// arrayDuplicates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>;
#include <unordered_map>;
using namespace std;

vector<int> findDuplicate(vector<int>& arr) {
    unordered_map<int, int> hashmap;
    vector<int> results;

    for (auto num : arr) {
        hashmap[num]++;
    }

    for (auto num : hashmap) {
        if (num.second > 1) {
            results.push_back(num.first);
        }
    }

    return results;
}

int main()
{
    vector<int> arr = { 2,3,1,2,3 };
    vector<int> result = findDuplicate(arr);

    for (int i : result) {
        cout << i << " ";
    }
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
