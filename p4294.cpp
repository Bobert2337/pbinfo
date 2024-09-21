#include <iostream>
using namespace std;

int main()
{
    unsigned int n;

    cin >> n;

    if (n % 2 != 0)
    {
        for (unsigned int i = n - 1; i >= n / 2 + 1; i--)
        {
            cout << n - i << " " << i << "\n";
        }
    }
    else
    {
        for (unsigned int j = n - 1; j >= n / 2; j--)
        {
            cout << n - j << " " << j << "\n";
        }
    }

    return 0;
}
