#include<iostream>
using namespace std;
int main(){
    int size;
    int arr[50];
    cout << "enter the the size of the array you wan to create : ";
    cin >> size;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int pos;
    cout << "enter the pos at which you want to add : " << endl;
    cin >> pos;
    int ele;
    cout << "enter the element you want to add : " << endl;
    cin >> ele;

    // array opdation
    arr[pos-1]=ele;
    cout << "update array : ";

    // updated array printing.
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
