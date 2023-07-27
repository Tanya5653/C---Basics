#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int largest = a[0];
    int smallest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (largest < a[i])
        {
            largest = a[i];
        }
        if (smallest > a[i])
        {
            smallest = a[i];
        }
    }
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest;
    return 0;
}