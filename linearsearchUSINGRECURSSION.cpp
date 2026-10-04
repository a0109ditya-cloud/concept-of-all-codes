#include<iostream>
using namespace std;
bool linearSearch(int *arr, int size, int ele){
    // base case
    if(size==0){
        return false;
        
    }if(arr[0]==ele){
        return true;
    }else{
        int search = linearSearch(arr+1, size-1, ele);
        return search;
    }
}
int main(){
    int arr[50];
    int ele;
    int size;
    cout << "ente the size of the array : ";
    cin >> size;
    cout << "enter the elementw of the array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "enter teh elemnt you want to search : ";
    cin >> ele;
    bool found=linearSearch(arr, size, ele);
    if(found){
        cout << "element found in the array "  << endl;
    }else{
        cout << "element not found in the array" << endl;
    }
}
