#include<iostream>
using namespace std;
int prime(int n){
    int div = 1;
    int count = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout << "prime number" << endl;
    }else{
        cout << "It is not an prime number" << endl;
    }
}
int main(){
    int num;
    cout << "Enter a number : ";\
    cin >> num;
    int answer = prime(num);
    return 0;
}