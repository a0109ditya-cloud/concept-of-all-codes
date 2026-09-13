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
    for(int i=0;i<size;i++){
        int smallest =0;
        for(int j=i+1;j<size;j++){
            if(arr[j]>arr[smallest]){
                smallest = j;
            }
        }
        swap(arr[smallest], arr[i]);
    }
    cout << "after sorting the array through largest number methord : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
