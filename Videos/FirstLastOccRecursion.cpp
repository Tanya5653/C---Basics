#include <iostream>
using namespace std;
int FirstOcc(int arr[], int n, int key)
{
    // base case
    if (n == 0)
    {
        return -1;
    }
    // rec case
    if (arr[0] == key)
    {
        return 0;
    }
    int subindex = FirstOcc(arr + 1, n - 1, key);
    if (subindex != -1)
    {
        return subindex + 1;
    }
    return -1;
}

int LastOcc(int arr[], int n, int key)
{
    // base case
    if (n == 0)
    {
        return -1;
    }
    int subindex = LastOcc(arr + 1, n - 1, key);
    if (subindex == -1)
    {
        if (arr[0] == key)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return subindex + 1;
    }
}
int main()
{
    int arr[] = {1, 2, 5, 7, 9, 7, 3};
    int n = sizeof(arr) / sizeof(int);
    int key = 7;
    cout << FirstOcc(arr, n, key) << endl;
    cout << LastOcc(arr, n, key);
    return 0;
}