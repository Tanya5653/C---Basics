#include <iostream>
using namespace std;
int a[1000][1000];
int main()
{
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            a[i][j]=0;
        }
    }
    int m, n;
    cin >> m >> n;
    int val = 1;
    
    for (int row = 0; row <= m - 1; row++)
    {
        for (int col = 0; col <= n - 1; col++)
        {
            a[row][col] = val;
            val = val + 1;
            cout << a[row][col] << " ";
        }
        cout << endl;
    }

    // wave print
    cout<<endl;
    cout<<"Wave Print"<<endl;
    for (int col = 0; col < n; col++)
    {
        // top down direction, even
        if (col % 2 == 0)
        {
            for (int row = 0; row < m; row++)
            {
                cout << a[row][col] << " ";
            }
            cout<<endl;
        }
        // down top direction, odd
        else
        {
            for (int row = m - 1; row >= 0; row--)
            {
                cout << a[row][col] << " ";
            }
            cout<<endl;
        }
    }
    return 0;
}