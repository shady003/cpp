#include <iostream>
using namespace std;
int main()
{
    int n, l, m, h, key;
    cout << "Enter the numbers of elements you want " << endl;
    cin >> n;
    l = 0;
    h = n;

    int arr[n];
    cout << "Enter the value of elements" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of " << i << " element " << endl;
        cin >> arr[i];
    }
    cout << "Enter kry to find " << endl;
    cin >> key;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (key == arr[m])
        {

            cout << key << " is at " << m;
            return 0;
        }

        else if (key < arr[m])
        {

            h = m - 1;
        }
        else
        {

            l = m + 1;
        }
    }
    return 0;
}