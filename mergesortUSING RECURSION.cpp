#include<iostream>
using namespace std;
void merge(int *arr, int s, int e){
    int mid=(s+e)/2;
    
    
    int len1=mid-s+1;
    
    
    int len2=e-mid;
    
    
    int *first = new int[len1];
    int *second = new int[len2];
    
    
    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }
    
    int k2=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[k2++];
    }
    
    int i=0;
    int j=0;
    int k3=s;
    while(i<len1&&j<len2){
        if(first[i]<=second[j]){
            arr[k3++]=first[i++];
        }else{
            arr[k3++]=second[j++];
        }
    }
    while(i<len1){
        arr[k3++]=first[i++];
    }
    while(j<len2){
        arr[k3++]=second[j++];
    }
    delete[] first;
    delete[] second;
    
}
void mergesort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    
    
    mergesort(arr, s, mid);
    
    
    mergesort(arr, mid+1, e);
    
    
    merge(arr, s, e);
}
int main(){
    int arr[50];
    int size;
    cout <<"enter the size of the array : ";
    cin >> size;
    cout << "enter the elements in the array : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int s=0;
    int e=size-1;
    mergesort(arr, s, e);
    cout << "the sorted array would be : ";
    for(int i=0;i<size;i++){
        cout <<arr[i] << " ";
    }
    return 0;
}
