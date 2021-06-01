#include <bits/stdc++.h>
using namespace std;

void Beta32A()
{
    long n, d;
    cin >> n >> d;
    long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(arr[i] - arr[j]) <= d)
            {

                count++;
            }
        }
    }

    cout << 2 * count;
}

void Beta33A()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    long mini = 2000000000;
    int x;
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> minheap;
    for (int i = 0; i < n; i++)
    {
        if (abs(arr[i] - arr[(i + 1) % n]) < mini)
        {
            mini = abs(arr[i] - arr[(i + 1) % n]);
            x = i;
        }
    }
    cout << x + 1 << " " << (x + 1) % n + 1;
}

void Beta36A()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            v.push_back(i);
        }
    }
    int count = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] - v[i - 1] != v[1] - v[0])
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

void contest44A()
{
    int n;
    cin >> n;
    vector<pair<string, string>> vp;
    set<pair<string, string>> sp;
    while (n--)
    {
        string x, y;
        cin >> x >> y;
        sp.insert({x, y});
    }
    cout << sp.size();
    // sort(vp.begin(), vp.end());
}
int main()
{
    // Beta32A();
    // Beta33A();
    // Beta36A();
    contest44A();
}