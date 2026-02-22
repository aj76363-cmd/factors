// primef.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
using namespace std;

class factz {
public:
    // Compute prime fact

    vector<int> primef(int n) {

        vector<int> fact;

        if (n <= 1) {
            return fact;
        }

        int div = 2;

        while (n > 1) {
            if (n % div == 0) {  //if no remainder we pass this else w incriment the divisor
                fact.push_back(div);

                n = n / div;
            }
            else {
                div++;
            }
        }

        return fact;
    }
    void printf(const vector<int>& fact) {

        cout << "\n[ ";//prints a vector of fact
        for (int x : fact) {

            cout << x << ","; //seperates numbers
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
        if (input == 0)break;
       
        int number;
        cout << "\n Enter a number: ";

        cin >> number;

        vector<int> fact = f.primef(number);

        cout << "\n fact of" << number << " = ";
        f.printf(fact);

        cout << "\n";

    }

    vector<int> result = f.primef(0);
    cout << "\nshould=[]\t Got: ";
    f.printf(result);
    cout << "\n";

    result = f.primef(1);
    cout << "\nshould=[]\t Got: ";
    f.printf(result);
    cout << "\n";

    result = f.primef(9);
    cout << "\nshould=[3, 3,]\t Got: ";
    f.printf(result);
    cout << "\n";

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
