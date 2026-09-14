#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int size;
    cout << "ente the size of the array : ";
    cin >> size;
    cout << "enter the elements of the array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "the array created by the given elements is : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    int value;
    cout << "enter the value you wan tto delete : ";
    cin >> value ;
    int index = -1;
    for(int i=0;i<size;i++){
        if(arr[i]==value){
            index = i;
            break;

        }
    }
    if(index==-1){
        cout << "no element to delete" << endl;
    }else{
        for(int i=index;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
        cout << "the final array created is : ";
        for(int i=0;i<size;i++){
            cout << arr[i] << " ";
        }
    }
}
