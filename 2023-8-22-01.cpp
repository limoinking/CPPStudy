#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int M = 4;
    vector<vector<int>> v(M);
    for(int r = 0;r < v.size();r++)
    {
        v[r].resize(r+1);
    }
    int k = 1;
    for(int r = 0;r < v.size();r++)
    {
        for(int c = 0;c < v[r].size();c++)
        {
            v[r][c] = ++k;
        }
    }
    for(int r = 0;r < v.size();r++)
    {
        for(int c = 0;c < v[r].size();c++)
        {
            cout << v[r][c];
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
