#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int size;
    cout << "Enter the size of the array you want to make : ";
    cin >> size;
    cout << "Enter the elements of array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "The created array is : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    for(int i=0;i<size;i++){
        bool swapped = false;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped =true;
            }
        }
        if(!swapped){
            break;
        }
    }
    cout << "The sorted array is : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
