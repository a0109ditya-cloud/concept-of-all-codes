#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the size of array you want to : ";
    cin >> size;
    int arr[50];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int num;
    int pos;
    cout << "Enter the num you want to insert : ";
    cin >> num;
    cout << "Enter the position of num : ";
    cin >> pos;
    for(int i=size;i>=pos-1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num;
    size++;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
