#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int a,b,n;
  cin>>a;
  cin>>b;
  string s[]={"","one","two","three","four","five","six","seven","eight","nine"};
  for (n=a; n<b+1; n++) {
  if (n<=9) {
  cout<<s[n]<<endl;
  }else if (n%2==0) {
  cout<<"even"<<endl;
  
  }else {
  cout<<"odd"<<endl;
  }
  }
    return 0;
}
