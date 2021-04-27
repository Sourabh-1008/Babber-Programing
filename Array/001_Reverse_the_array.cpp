#include <iostream>
using namespace std;
void reverseArray(int n, int arr[])
{
    int start = 0, end = n - 1;
    if (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int n;
    cout << "Enter The Number of Array:-";
    cin >> n;
    int arr[n];
    cout << "Enter the Array Element:-";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArray(n,arr);
    cout<<"Reverse Array:-";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

/*
Enter The Number of Array:-5
Enter the Array Element:-10 20 30 40 50
Reverse Array:-50 20 30 40 10 
*/