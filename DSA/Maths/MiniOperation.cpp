#include <bits/stdc++.h>
using namespace std;

// Recursive function to return the greatest power
// of 'p' that divides 'n'
int maxPower(int n, int p)
{
    if (n == 0)
        return 0;
    else
        return (n / p) + maxPower(n / p, p);
}

// Function to return the minimum operations required
int minOperations(int x, int y, int p, int q)
{
    // Not possible
    if (y % x != 0)
        return -1;

    int d = y / x;

    // To store the greatest power of p that divides d
    int a = maxPower(d, p);

    // To store the greatest power of q that divides d
    int b = maxPower(d, q);

    // If d > 1
    if (d != 1)
        return -1;

    // Since, d = p^a * q^b
    return (a + b);
}

// Driver code
int main()
{
    int x = 12, y = 2592, p = 2, q = 3;

    cout << minOperations(x, y, p, q);

    return 0;
}
