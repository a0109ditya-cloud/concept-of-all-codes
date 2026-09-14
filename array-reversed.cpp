#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "enter the size of the array : ";
    cin >> size;
    int arr[50];
    cout << "enter the size of the array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "the array created is : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
   int start =0;
   int end=size-1;
   while(start < end){
    int temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
   }
   cout << "the reversed array : ";
   for(int i=0;i<size;i++){
        cout << arr[i] << " ";
   }
}
