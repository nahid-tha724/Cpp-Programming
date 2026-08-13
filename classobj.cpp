#include<iostream>
using namespace std;
class Student {
    public:
    int id;
    string name;
    float cgpa;
   void InputSt ( ) {
     cin >> name >> id >> cgpa;
   }
void display ( ) {
  cout << name << endl << id << endl << cgpa << endl;
}
};
int main ( ) {
  Student s1, s2;
  s1.InputSt( );
  s2.InputSt( );
  s1.display( );
  s2.display( );
}
