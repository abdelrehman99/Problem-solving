#include <iostream>
using namespace std;
int main()
{
    long long n, x, index = 1, temp = 1000000001;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x < temp)
        {
            temp = x;
            index = i;
        } else if (x == temp)
        {
            index = 0;
        }
    }
    if (index != 0)
    {
        cout << index;
    } else
    {
        cout << "Still Rozdil";
    }
}