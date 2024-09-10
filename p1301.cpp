#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long double l1, l2, l3;

    cin >> l1 >> l2 >> l3;

    if ((l1 + l2 <= l3) || (l2 + l3 <= l1) || (l1 + l3 <= l2))
    {
        cout << "Nu formeaza triunghi";
        return 0;
    }

    vector<long double> vctr = {l1, l2, l3};

    for (auto i : vctr)
    {
        if (count(vctr.begin(), vctr.end(), i) == 2)
        {
            cout << "Formeaza triunghi isoscel";
            return 0;
        }
    }

    cout << "Nu formeaza triunghi isoscel";

    return 0;
}