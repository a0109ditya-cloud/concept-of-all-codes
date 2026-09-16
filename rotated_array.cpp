#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int size;
    cout << "enter the size of the array : ";
    cin >> size;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "the array created by you is : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    int start = 0;
    // int end = size-1;
    int k;
    cout << "enter the valueof k : ";
    cin >> k;
    int end = k-1;
    while(start<end){
        int t = arr[start];
        arr[start]=arr[end];
        arr[end]=t;
        start++;
        end--;
    }
    start = k;
    end = size-1;
    while(start < end){
        int o = arr[start];
        arr[start]=arr[end];
        arr[end]=o;
        start++;
        end--;
    }
    start = 0;
    end = size -1;
    while(start<end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout << "the reversed array would be : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}
