// Complete the following program.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // TODO: declare variable n for the exponent input
    int n;
    double result = 1.0;

    // TODO: read n from standard input
    cin >> n;

    // TODO: compute 2 to the power of n using a loop (no cmath pow)
    if (n > 0) {

    // For positive n: multiply result by 2, n times
    for (int i =0; i < n; i++) {
        result *= 2;
    }
}
    // For negative n: divide result by 2, |n| times
    else if (n < 0) {
        for (int i = 0; i < -n; i++) {
            result /= 2;
        }
    }
    cout << "2 to Power " << n << " is " << fixed << setprecision(5) << result << endl;
    return 0;
}

