#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    int arr[n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        cout << "enter element " << i + 1 << " : ";
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                int index = j;
                for (int k = index; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}