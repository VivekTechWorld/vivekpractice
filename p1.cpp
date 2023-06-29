#include<iostream>// preproccer derective
// using to incude files
using namespace std;

int main() {
  int a;
  a=12;
  cout << "hello world";
  cout << "size of int:"<<sizeof(a)<<endl;

  float b;
  cout << "size of  float:"<<sizeof(b)<<endl;

  char c;
  cout << "size of charector: "<<sizeof(c)<<endl;

  bool d;
  cout << "size of bool:"<<sizeof(d)<<endl;

  short int abc;
  cout << "size of short int :"<<sizeof(abc)<<endl;

  long int v=10;
  cout << "size of long int :"<<sizeof(v)<<endl;

  return 0;
}
