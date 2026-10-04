#include<iostream>
using namespace std;
bool binary(int *arr, int s, int e, int k){
    if(s>e){
        return false;
    }
    int mid=(s+e)/2;
    if(arr[mid]==k){
        return true;
    }else if(arr[mid]>k){
        return  binary(arr, s, mid-1, k);
    }else if(arr[mid]<k){
        return binary(arr, mid+1, e, k);
    }
}
int main(){
    int arr[50];
    int size;
    int ele;
    cout << "enter the size of the array : ";
    cin >> size;
    
    cout << "enter the elemnts of the array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "enter the elemnt you wan to search : ";
    cin >> ele;
    int s=0;
    int e=size-1;
    int ans=binary(arr, s, e, ele);
    if(ans){
        cout << "element found in the array " << endl;
    }else{
        cout << "element not  found in the array" << endl;
    }
}
