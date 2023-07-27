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
    int smallest = a[0];
    int smallestIndex = 0;
    for (int i = 1; i < n; i++)
    {

        if (smallest > a[i])
        {
            smallest = a[i];
            smallestIndex = i;
        }
    }
    int secondSmallest = a[0] == smallest ? a[1] : a[0];
    for (int i = 1; i < n; i++)
    {
        if (i != smallestIndex)
        {
            if (secondSmallest > a[i])
            {
                secondSmallest = a[i];
            }
        }
    }
    cout << "Smallest: " << smallest << endl;
    cout << "SecondSmallest: " << secondSmallest;
    return 0;
}