#ifndef RECEIPT_HPP
#define RECEIPT_HPP

// The required sales tax rate for this lab.
const double TAX_RATE = 0.0775;

// Calculates the subtotal of three item prices.
double calculateSubtotal(double item1, double item2, double item3);

// Calculates sales tax using the required TAX_RATE.
double calculateTax(double subtotal);

// Calculates a tip based on the subtotal and a tip percentage.
// Example: tipPercent = 15 means 15%.
double calculateTip(double subtotal, double tipPercent);

// Calculates final total.
double calculateTotal(double subtotal, double tax, double tip);

#endif
