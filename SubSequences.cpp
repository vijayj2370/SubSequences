// SubSequences.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void printSubSequence(int ind, vector<int>& ds, vector<int>& arr, int n) {

    if (ind == n) {
        for (auto e : ds) {
            cout << e << " ";
        }
        if (ds.size() == 0)
            cout << "{}";
            
        cout << "\n";
        return;
    }

    printSubSequence(ind + 1, ds, arr, n);

    ds.push_back(arr[ind]);
    printSubSequence(ind + 1, ds, arr, n);

    ds.pop_back();
 
}

int main()
{
    vector<int> arr= { 3, 1, 2 };
    vector<int> ds;
    int n = arr.size();
    printSubSequence(0, ds, arr, n);
    //std::cout << "Hello World!\n";
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
