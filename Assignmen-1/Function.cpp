#include <iostream>
#include <cstdio>
using namespace std;

int getmax(int num1,int num2){
    int result;
    if(num1>num2){
        result=num1;
    }else{
        result=num2;
    }
    return result;
}
int main() {
 int a,b,c,d;
 cin>>a>>b>>c>>d;
 int x=getmax(a,b);
 int y=getmax(c,d);
 cout<<getmax(x,y);   
    return 0;
}
