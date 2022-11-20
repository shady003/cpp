#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num, question;
    cin >> num;
    cin >> question;
    int count[num];
    vector<int> v[num];
    for (int i = 0; i < num; i++)
    {
        cin >> count[i];
        for (int k = 0; k < count[i]; k++)
        {
            int n;
            cin >> n;
            v[i].push_back(n);
        }
    }
        int arr[question];
        for (int l = 0; l < question; l++)
        {
            cin >> arr[l];
        }
        // next loop start here...
        for (int i = 0; i < question; i++)
        {
            arr[i];
            for (int j = 0; j < count[i]; j++)
            {
                if (arr[i] == v[i][j])
                {
                    cout << j;
                }
                else
                {
                }
            }
        }
        return 0;
    }
    /*int num, question;
    cin >> num;
    cin >> question;
    int count[num];
    vector<int> v[num];*/