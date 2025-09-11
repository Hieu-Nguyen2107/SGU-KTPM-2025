#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

int solveQuartic(double a, double b, double c, double x[])
{
    if (a == 0 && b == 0 && c == 0)
        return -1;
    if (a == 0 && b == 0)
        return 0;
    if (a == 0)
    {
        double y = -c / b;
        if (y < 0)
            return 0;
        x[0] = sqrt(y);
        x[1] = -sqrt(y);
        return 2;
    }
    double delta = b * b - 4 * a * c;
    if (delta < 0)
        return 0;
    double y1 = (-b + sqrt(delta)) / (2 * a);
    double y2 = (-b - sqrt(delta)) / (2 * a);
    int count = 0;
    if (y1 >= 0)
    {
        x[count++] = sqrt(y1);
        x[count++] = -sqrt(y1);
    }
    if (y2 >= 0 && y2 != y1)
    {
        x[count++] = sqrt(y2);
        x[count++] = -sqrt(y2);
    }
    return count;
}

struct TestCase
{
    double a, b, c;
    int expectedCount;
    string description;
};

int main()
{
    vector<TestCase> tests = {
        {0, 0, 0, -1, "Infinite solutions"},
        {0, 0, 5, 0, "No solution"},
        {0, 2, -8, 2, "Two real roots: ±2"},
        {1, 0, -4, 2, "Two real roots: ±√2"},
        {1, -5, 4, 4, "Four real roots: ±1, ±2"},
        {1, 0, 0, 1, "No real solution (Δ<0)"}};

    for (int i = 0; i < tests.size(); i++)
    {
        double x[4];
        int result = solveQuartic(tests[i].a, tests[i].b, tests[i].c, x);
        cout << "Test " << i + 1 << " (" << tests[i].description << "): ";
        if (result == tests[i].expectedCount)
            cout << "PASSED\n";
        else
            cout << "FAILED (expected " << tests[i].expectedCount << ", got " << result << ")\n";
    }
    return 0;
}
