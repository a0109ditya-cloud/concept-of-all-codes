#include<bits/stdc++.h>
using namespace std;
class human{
  public:
  char gender;
  int hieght;
  string color;
  
  char getgender(){
      return gender;
  }
  int gethieght(){
      return hieght;
  }
  string getcolor(){
      return color;
  }
  void sethieght(int hieght){
      this->hieght=hieght;
  }
  void setcolor(string color){
      this->color=color;
  }
  void setgender(char gender){
      this->gender=gender;
  }
  void func(){
      cout << "i am human" << endl;
  }
  void add(){
      cout << "hello love babar" << endl;
  }
  int add(int d, int h, int o){
      return d+h+o;
  }
  int add(int j, int l){
      return j-l;
  }
};
class mars{
  public:
  void func(){
      cout << "mars" << endl;
  }
};
class male : public human, public mars{
    public:
    string hor;
    string gethor(){
        return hor;
    }
    void sethor(string hor){
        this->hor=hor;
    }
};
class animal{
  public:
  void speak(){
      cout << "bark" << endl;
  }
};
class dog : public animal{
  public:
  void speak(){
      cout << "woff woff" << endl;
  }
};
int main(){
    male adi;
    human p;
    dog k;
    adi.setgender('T');
    cout  << adi.getgender() << endl;
    adi.mars::func();
    adi.human::func();
    p.add();
    cout << p.add(7, 10, 6) << endl;
    cout << p.add(7, 5) << endl;
    k.speak();
}
