#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Define the function to integrate
double f(double x) {
    return x * x; // Example: f(x) = x^2
}

int main() {
    double a, b;      // Integration limits
    int n;            // Number of subintervals
    double h, sum = 0, midpoint;

    // Input
    cout << "Enter the lower limit (a): ";
    cin >> a;
    cout << "Enter the upper limit (b): ";
    cin >> b;
    cout << "Enter the number of subintervals (n): ";
    cin >> n;

    // Step size
    h = (b - a) / n;

    // Midpoint Rule
    for (int i = 0; i < n; i++) {
        midpoint = a + h * (i + 0.5); // Midpoint of the subinterval
        sum += f(midpoint);           // Evaluate the function at the midpoint
    }

    // Multiply the sum by step size to get the integral
    double result = h * sum;

    // Output the result
    cout << fixed << setprecision(6);
    cout << "The approximate value of the integral is: " << result << endl;

    return 0;
}
