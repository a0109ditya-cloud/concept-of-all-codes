#include<iostream>
#include<unordered_map>
using namespace std;
int rom(string s){
    int reasult=0;
    unordered_map<char, int>m={
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };
    for(int i=0;i<s.size();i++){
        int value=m[s[i]];
        if((i+1<s.size())&&(value<m[s[i+1]])){
            reasult-=value;
        }else{
            reasult+=value;
        }
    }
    return reasult;
}
int main(){
    string s;
    cin >> s;
    int re=rom(s);
    cout << re<< endl;
}
