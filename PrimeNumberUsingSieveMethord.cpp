#include<bits/stdc++.h>
using namespace std;
int prime(int n){
    vector<bool> primee(n+1, true);
    primee[0]=primee[1]=false;
    int cnt = 0;
    for(int i=2;i<n;i++){
        if(primee[i]){
            cnt++;
            for(int j=2*i;j<n;j+=i){
                primee[j]=0;
            }
        }
    }
    return cnt;
}
int main(){
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    
    
    cout << "the number of prime numbes are : " << prime(n) << endl;
    
}
