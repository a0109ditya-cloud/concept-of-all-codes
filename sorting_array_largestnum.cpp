#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int size;
    cout << "enter the value of n : ";
    cin >> size;
    cout << "enter the value of elements in the array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout<< "te array before sorting it through largest number methrod : ";
    for(int i=0;i<size;i++){
        cout << arr[i] <<  " ";
    }
    cout << endl;
    for(int i=size-1;i>=0;i--){
        int largest =0;
        for(int j=1;j<=i;j++){
            if(arr[j]>arr[largest]){
                largest = j;
            }
        }
        swap(arr[largest], arr[i]);
    }
    cout << "after sorting the array through largest number methord : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
