#include <iostream>
using namespace std;
// PrefixSums
//timtaken O(N^2)
int LargestSubarraySum2(int arr[], int n)
{
    int prefix[100] = {0};
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int largestsum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subarraysum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            largestsum = max(largestsum, subarraysum);
        }
    }
    return largestsum;
}
int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << LargestSubarraySum2(arr, n) << endl;
    return 0;
}