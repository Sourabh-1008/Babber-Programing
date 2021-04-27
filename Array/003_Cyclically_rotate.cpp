#include <iostream>
using namespace std;
void cyclicalyRotate(int n, int arr[])
{
    int x = arr[n - 1];
    for (int i= n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
        arr[0] = x;
}
int main()
{
    int n;
    cout << "Enter the Number of array:-";
    cin >> n;
    int arr[n];
    cout << "Enter the Element of array:-";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cyclicalyRotate(n, arr);
    cout << "Cyclically Rotate:-";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

/*
Enter the Number of array:-5
Enter the Element of array:-10 20 30 40 50
Cyclically Rotate:-50 10 20 30 40 
*/