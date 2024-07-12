#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push(x);
    }
    queue<int> b;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push(x);
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool same = true;
    while (!a.empty() && !b.empty())
    {
        if (a.top() != b.front())
        {
            same = false;
            break;
        }
        a.pop();
        b.pop();
    }
    if (same)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}