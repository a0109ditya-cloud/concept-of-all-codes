#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int size;
    cout << "enter size ofarray you want to create : ";
    cin >> size;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "array created";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    int num;
    cout << "enter the num you want to search : ";
    cin >> num;
    bool found = false;
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            cout << "element found at index : " << i;
            found = true;
            break;

        }
    }
    if(!found){
        cout << "element not found";
    }

}
