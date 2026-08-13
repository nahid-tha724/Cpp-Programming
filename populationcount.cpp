#include<bits/stdc++.h>
using namespace std;
int main ( ) {
  int a = 8; 
  int count = 0;
  while (a!=0) {
       count =  count + (a&1);
       a = a >> 1;
  }
  cout << count;
}
