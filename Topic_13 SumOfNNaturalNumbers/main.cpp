#include <iostream>
using namespace std;
// Function to find sum
int findSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum = sum + i;
    return sum;
}
int main()
{
    int n = 2;
    cout << findSum(n);
    return 0;
}