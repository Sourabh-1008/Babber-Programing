#include<iostream>
#include<algorithm>
using namespace std;
void  negativeNumber(){

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array:-";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    negativeNumber(n,arr);
    return 0;
}