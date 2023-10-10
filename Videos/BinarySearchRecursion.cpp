#include <iostream>
using namespace std;
int BinarySearch(int a[], int s, int e, int key)
{
    // basecase
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            return BinarySearch(a, s, mid - 1, key);
        }
        else
        {
            return BinarySearch(a, mid + 1, e, key);
        }
    }
    // recursioncase
    return -1;
}
int main()
{
    int a[1000], n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    cout << BinarySearch(a, 0, n - 1, key);
    return 0;
}