#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int n;
    double h, x, fx[100], f_diff;
    
    
    cout << "Enter the number of data points: ";
    cin >> n;

    cout << "Enter the step size (h): ";
    cin >> h;

    cout << "Enter the functional values (f(x)): " << endl;
    for (int i = 0; i < n; i++) {
        cout << "f(x[" << i << "]) = ";
        cin >> fx[i];
    }

    cout << "\n** Differences **" << endl;

    
    for (int i = 0; i < n - 1; i++) {
        f_diff = (fx[i + 1] - fx[i]) / h;
        cout << "Forward Difference at x[" << i << "] = " << f_diff << endl;
    }

    
    for (int i = 1; i < n; i++) {
        f_diff = (fx[i] - fx[i - 1]) / h;
        cout << "Backward Difference at x[" << i << "] = " << f_diff << endl;
    }


    for (int i = 1; i < n - 1; i++) {
        f_diff = (fx[i + 1] - fx[i - 1]) / (2 * h);
        cout << "Central Difference at x[" << i << "] = " << f_diff << endl;
    }

    return 0;
}
