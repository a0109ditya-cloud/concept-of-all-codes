#include<iostream>
using namespace std;
int part(int *arr, int s, int e){
    int ct=0;
    int sm = arr[s];
    for(int i=s+1;i<=e;i++){
        if(arr[i]<sm){
            ct++;
        }
    }
    int pivot= s+ct;
    swap(arr[pivot], arr[s]);
    int i=s;
    int j=e;
    while(i<pivot && j>pivot){
        while(arr[i]<sm){
            i++;
        }
        while(arr[j]>sm){
            j--;
        }
        if(i<pivot && j>pivot){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivot;
}
void quicksort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    int p = part(arr, s, e);
    quicksort(arr, s, p-1);
    quicksort(arr, p+1, e);
}
int main(){
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    int *arr = new int[n];
    cout << "enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int s=0;
    int e=n-1;
    quicksort(arr, s, e);
    cout << "sorted array would be : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}
