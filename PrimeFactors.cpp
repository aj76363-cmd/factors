// primef.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
using namespace std;

class factz {
    void facth(int n, int div, vector<int>& fact) {

        if (n == 1) {

            return;
        }

        if (n % div == 0) {  
            fact.push_back(div);

            facth(n / div, div, fact);
        }
        else {
            facth(n, div + 1, fact);

        }
    }
public:


    vector<int> primef(int n) {

        vector<int> fact;

        if (n <= 1) {

            return fact;
        }

        facth(n, 2, fact);

        return fact;
    }

    void printf(const vector<int>& fact) {


        cout << "\n[ ";
        for (int x : fact) {
            cout << x << ",";
        }
        cout << "]\n";
    }


};

int main() {
    factz f;

    while (true) {
        int input;
        cout << "\n Would you like to factor a number? (0) no\n";
        cin >> input;
        if (input == 0) break;

        int number;
        cout << "\n number: ";
        cin >> number;

        vector<int> fact = f.primef(number);

        cout << "\n fact of " << number << " = ";
        f.printf(fact);
    }

    vector<int> result = f.primef(0);
    cout << "\nshould=[]\t Got: ";
    f.printf(result);

    result = f.primef(1);
    cout << "\nshould=[]\t Got: ";
    f.printf(result);

    result = f.primef(9);
    cout << "\nshould=[3,3,]\t Got: ";
    f.printf(result);

    return 0;
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
