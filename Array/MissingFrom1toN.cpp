#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i <n-1; i++)
    {
        cin >> a[i];
    }
    int totalSum = (n*(n + 1)) / 2;
    int arraySum = 0;
    for (int i = 0; i < n-1 ; i++)
    {
        arraySum = arraySum + a[i];
    }
    cout << "Missing: " << totalSum - arraySum;
    return 0;
}