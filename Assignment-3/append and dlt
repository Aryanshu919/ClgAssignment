#include<iostream>
#include<string>
using namespace std;
int main() {
    string s,t;
    int k;
    cin >> s;
    cin >> t;
    cin >> k;
    int cl=0;
    int x=s.size();
    int y=t.size();
    while(cl<x && cl<y){
        if(s[cl]!=t[cl]){
             break;
        }
        cl++;
    }
    if((x-cl+y-cl)<=k && (x-cl+y-cl)%2==k%2){
        cout<<"Yes"<<endl;
    }
    else if(x+y<=k){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
    return 0;
}
