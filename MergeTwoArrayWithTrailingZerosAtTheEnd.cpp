#include<iostream>
using namespace std;
void trail(int *arr1, int *arr2, int n1, int n2, int *arr3){
    
    
    int i=0;
    int j=0;
    int k=0;
   
   
    while(i<n1 &&  j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    
    while(i<n1){
        arr3[k++]=arr1[i++];
    }
    
    while(j<n2){
        arr3[k++]=arr2[j++];
    }
}
void zeros(int *arr, int n){
    
    int k=0;
    
    
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[k]=arr[i];
            k++;
        }
    }
    
    
    while(k<n){
        arr[k]=0;
        k++;
    }
}
void print(int *arr3, int n3){
    for(int i=0;i<n3;i++){
        cout << arr3[i] << " ";
    }
}
int main(){
    int n1;
    int n2;
    int n3 = n1+n2;
    
    
    cout << "enterr the value of n1 : ";
    cin >> n1;
    
    
    cout << "enter the value of n2 : ";
    cin >> n2;
    
    
    int *arr1=new int[n1];
    int *arr2=new int[n2];
    int *arr3=new int[n3];
    
    cout << "enter the elements of the array1 : ";
    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }
    
    
    cout << "enter the elements of the array2 : ";
    for(int i=0;i<n2;i++){
        cin >> arr2[i];
    }
    
    
    trail(arr1, arr2, n1, n2, arr3);
    
    
    cout << "the array would be : ";
    print(arr3, n3);
    zeros(arr3, n3);
    
    
    cout << "the array with trailing zeors at last would be : ";
    print(arr3, n3);
    
    
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    return 0;
}
