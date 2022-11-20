#include <iostream>
using namespace std;
int search(int A[], int key, int size)
{

    for (int i = 0; i < size; i++)
    {
        if (key == A[i])
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int n, key;
    cout << "Enter the number of elements you want ";
    cin >> n;
    int arr[n];
    cout<<"Enter the elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Key you want to find ";
    cin >> key;
    cout << "performing linear search..." << endl;
    cout << "The value is at " << endl;
    int point = search(arr, key, n);
            cout<<point;

    return 0;
}