#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
    int t;
    cin >> t;
    long a, b, ans[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        ans[i] = (ceil(((float)a / b)) * b) - a;
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << endl;
    }
}