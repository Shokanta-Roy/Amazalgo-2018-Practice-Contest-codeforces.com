#include <iostream>
#include<cmath>
#define ll long long

using namespace std;

// Function to calculate the greatest common divisor (GCD) using recursion
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate the least common multiple (LCM)
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

// Function to find the smallest possible number of points
int smallestPoints(int a, int b)
{
    return lcm(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    int result = smallestPoints(a, b);
    cout << result << endl;
    return 0;
}



