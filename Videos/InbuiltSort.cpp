#include <iostream>
#include <algorithm>
using namespace std;
/*bool compare(int a, int b)
{
    return a > b;
}*/
int main()
{
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<",";
    }
    return 0;
}