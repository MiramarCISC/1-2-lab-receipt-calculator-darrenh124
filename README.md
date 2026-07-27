[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=24162707)
# 1.2 Lab: Receipt Calculator

## Course
CISC 192 — C/C++ Programming

## Lab Focus
This lab practices the Week 1 Program Basics topics:

- Data types
- Constants
- Arithmetic operations
- Variables and assignment
- Console input with `cin`
- Console output with `cout`
- Formatted output
- Counters and accumulators
- Writing readable beginner C++ code

## Estimated Time
About 1 hour.

---

## Goal

Create a C++ console program that calculates and prints a simple receipt.

The program should ask the user for:

1. The price of item 1
2. The price of item 2
3. The price of item 3
4. A tip percentage

The program should then calculate:

- Subtotal
- Tax
- Tip
- Total

Use a tax rate of **7.75%**.

---

## Required Output Behavior

Your program should print a clear receipt with labels. The exact wording may vary, but your program must display:

- The subtotal
- The tax amount
- The tip amount
- The final total

Example interaction:

```text
Receipt Calculator

Enter price for item 1: 10.00
Enter price for item 2: 5.50
Enter price for item 3: 4.25
Enter tip percentage: 15

Subtotal: $19.75
Tax: $1.53
Tip: $2.96
Total: $24.24
```

---

## Files You May Edit

You should edit:

```text
src/main.cpp
```

You may also edit:

```text
include/receipt.hpp
src/receipt.cpp
```

Do **not** edit the test files or GitHub Actions workflow.

---

## Required Functions

To pass the unit tests, implement these functions in `src/receipt.cpp`:

```cpp
double calculateSubtotal(double item1, double item2, double item3);
double calculateTax(double subtotal);
double calculateTip(double subtotal, double tipPercent);
double calculateTotal(double subtotal, double tax, double tip);
```

The function declarations are already provided in:

```text
include/receipt.hpp
```

---

## Constants

Use this tax rate:

```cpp
const double TAX_RATE = 0.0775;
```

This is already provided in `include/receipt.hpp`.

---

## Compile and Run

In GitHub Codespaces, open the terminal and run:

```bash
make
./main
```

---

## Run Unit Tests

```bash
make test
```

If the tests pass, you should see output ending with something similar to:

```text
All tests passed!
```

---

## Submit Your Lab

In Canvas, submit:

1. A link to your GitHub Classroom repository.
2. A Canvas Studio video demo.

---

## Video Demo Requirements

Your video should be 3–5 minutes and show:

1. Your project open in GitHub Codespaces.
2. Your program compiling successfully.
3. Your program running with sample input.
4. Your unit tests passing with `make test`.
5. A brief explanation of:
   - Your variables
   - Your constants
   - Your arithmetic calculations
   - One function you implemented

---

## Grading

This lab discussion is worth **2 points**:

| Requirement | Points |
|---|---:|
| Code passes unit tests | 0.5 |
| Video demo clearly demonstrates the program | 0.5 |
| Peer review completed one week later | 1.0 |

---

## Peer Review

After completing your lab, review a peer’s repository using a GitHub Pull Request.

Your peer review should answer:

1. What is the link to your Pull Request?
2. What did your peer’s program do successfully?
3. What two improvements did you suggest?
4. What file(s) and function(s) did your review focus on?
5. What did you learn from reading your peer’s code?
6. What question would you ask your peer about their design or debugging process?
