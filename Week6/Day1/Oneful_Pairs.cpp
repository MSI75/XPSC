#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int t;
void doWork()
{
    int a, b;
    cin >> a >> b;
    int com = a + b + (a * b);
    if (com == 111)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
}

int main()
{
    Faster;
    // cin >> t;
    // while (t--)
    // {
    //     doWork();
    // }
    doWork();
    return 0;
}