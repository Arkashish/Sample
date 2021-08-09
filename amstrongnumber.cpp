
#include <bits/stdc++.h>
using namespace std;

int armstrong(int n)
{
    int c = n;
    int d, r=0;
    while (n > 0)
    {
        d = n % 10;
        // r = r * 10 + d;
        r+=(d*d*d);
        n = n / 10;
    }
    return c == r;
}
int main()
{
    for (int i = 100; i < 1000; i++)
    {
        if (armstrong(i))
            cout << i << " ";
    }
}