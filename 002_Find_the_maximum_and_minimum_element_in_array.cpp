#include <iostream>
#include <climits>
using namespace std;
void maximumNumber(int n, int arr[], int maxNo)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxNo)
        {
            maxNo = arr[i];
        }
        //maxNo = max(maxNo, arr[i]);   this is different logic using in built liberary...... 
    }
    cout << "Maximum Number:-" << maxNo << endl;
}
void minimumNumber(int n, int arr[], int minNo)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minNo)
        {
            minNo = arr[i];
        }
        //minNo = min(minNo,arr[i]);  //this is different logic using in built liberary......
    }
    cout << "Minimum Number:-" << minNo << endl;
}
int main()
{
    int n;

    cout << "Enter the numbers:-";
    cin >> n;

    int arr[n];
    cout << "Enter the Elements of Array:-";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int maxNo = arr[0];
    int minNo = arr[0];

    //int maxNo = INT_MIN;
    //int minNo = INT_MAX;

    maximumNumber(n, arr, maxNo);
    minimumNumber(n, arr, minNo);
    return 0;
}

/*
Enter the numbers:-5
Enter the Elements of Array:-78 96 45 12 10
Maximum Number:-96
Minimum Number:-10
*/