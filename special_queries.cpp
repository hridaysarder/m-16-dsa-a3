#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue<string> q;
    int t;
    cin >> t;
    while (t--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            string name;
            cin >> name;
            q.push(name);
        }
        else if (cmd == 1 && !q.empty())
        {
            cout << q.front() << endl;
            q.pop();
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}