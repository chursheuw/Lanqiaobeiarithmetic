#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int>a(n + 1), b(n + 1);  //如果使用动态数组要初始化大小

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = b[i-1] + a[i];   
    }
    
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << b[y] - b[x - 1] <<'\n'; //注意前缀和的范围
    }
    return 0;
}

