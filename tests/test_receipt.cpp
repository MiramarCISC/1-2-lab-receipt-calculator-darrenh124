#include <cmath>
#include <iostream>
#include <string>
#include "receipt.hpp"

using namespace std;

bool nearlyEqual(double actual, double expected, double epsilon = 0.001) {
    return fabs(actual - expected) <= epsilon;
}

void assertNear(const string& testName, double actual, double expected) {
    if (!nearlyEqual(actual, expected)) {
        cerr << "FAILED: " << testName << endl;
        cerr << "  Expected: " << expected << endl;
        cerr << "  Actual:   " << actual << endl;
        exit(1);
    }
    cout << "PASSED: " << testName << endl;
}

int main() {
    assertNear("subtotal of 10.00, 5.50, 4.25", calculateSubtotal(10.00, 5.50, 4.25), 19.75);
    assertNear("subtotal allows zero values", calculateSubtotal(0.00, 2.50, 3.50), 6.00);
    assertNear("tax on 100.00 at 7.75%", calculateTax(100.00), 7.75);
    assertNear("tax on 19.75 at 7.75%", calculateTax(19.75), 1.530625);
    assertNear("tip of 15% on 20.00", calculateTip(20.00, 15.0), 3.00);
    assertNear("tip of 18% on 42.50", calculateTip(42.50, 18.0), 7.65);
    assertNear("total of subtotal, tax, and tip", calculateTotal(19.75, 1.530625, 2.9625), 24.243125);
    assertNear("total with no tip", calculateTotal(10.00, 0.775, 0.00), 10.775);

    cout << endl << "All tests passed!" << endl;
    return 0;
}
