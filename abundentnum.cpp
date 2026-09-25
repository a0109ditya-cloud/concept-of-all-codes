#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count=count+i;
        }
    }
    if(count>n){
        cout << "abundent number" << endl;
    }else{
        cout << "not an abundent number" << endl;
    }
}
