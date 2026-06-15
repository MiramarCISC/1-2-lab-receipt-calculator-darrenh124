#include <iomanip>
#include <iostream>
#include "receipt.hpp"

using namespace std;

int main() {
    double item1 = 0.0;
    double item2 = 0.0;
    double item3 = 0.0;
    double tipPercent = 0.0;

    cout << "Receipt Calculator" << endl << endl;

    cout << "Enter price for item 1: ";
    cin >> item1;

    cout << "Enter price for item 2: ";
    cin >> item2;

    cout << "Enter price for item 3: ";
    cin >> item3;

    cout << "Enter tip percentage: ";
    cin >> tipPercent;

    double subtotal = calculateSubtotal(item1, item2, item3);
    double tax = calculateTax(subtotal);
    double tip = calculateTip(subtotal, tipPercent);
    double total = calculateTotal(subtotal, tax, tip);

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
