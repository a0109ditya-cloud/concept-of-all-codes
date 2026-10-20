#include<iostream>
using namespace std;
class hero{
    public:
    int level;
    string name;
    static int time;
    
    hero(int level, string name){
        this->level=level;
        this->name=name;
    }
    int getlevel(){
        return level;
    }
    string getname(){
        return name;
    }
    void setlevel(int l){
        level = l;
    }
    void setname(int n){
        name = n;
    }
    ~hero(){
        cout << "called" << endl;
    }
    
    
};
int hero::time = 5;
int main(){
    
    hero k(100, "aditya");
    hero p(k);
    
    
    hero *u = &k;
    cout << k.getname() << endl;
    cout << k.getlevel() << endl;
    
    
    cout << "pointer values" << endl;
    cout << u->getlevel() << endl;
    cout << u->getname() << endl;
    
    
    cout << "copy constructor would be : " << endl;
    cout << p.getname()<< endl;
    cout << p.getlevel()<< endl;
    
    
    hero *i = new hero(100, "jalaj");
    cout << "new pointer values would be : " << endl;
    cout << i->getlevel() << endl;
    cout << i->getname() << endl;
    
    hero l(90, "kiran");
    cout << l.getname() << endl;
    cout << l.getlevel() << endl;
    
    cout << "copy through assingment operator " << endl;
    l=k;
    cout << l.getname() << endl;
    cout << l.getlevel() << endl;
    
    cout << "static pointer : " ;
    cout << hero::time << endl;
}
