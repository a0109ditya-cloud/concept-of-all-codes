#include<bits/stdc++.h>
using namespace std;
bool  issubsequece(string s, string t){
    int i=0;
    int j=0;
    while(i<s.size() && j<t.size()){
        if(s[i]==t[j]){
            i++;
        }
        j++;
    }
    return i==s.size();
}
int main(){
    string n;
    cout << "enter the value of n : ";
    cin >> n;
    string t = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    bool p = issubsequece(n, t);
    if(p){
        cout << "yes t is an subsequence of string s";
    }else{
        cout << "no t is not an subsequence of string s";
    }
}
