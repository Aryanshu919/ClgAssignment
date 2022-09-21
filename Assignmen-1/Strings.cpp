#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin >> a;
    cin >> b;
    int lengtha= a.size();
    int lengthb= b.size();
    cout << lengtha << " " << lengthb<< endl;
  
    string c= a+b;
    cout << c<<endl;
    
   char x = a[0];
    a[0] = b[0];
    b[0] = x;
    cout << a<<" "<< b;
    
    
    
    
  
    return 0;
}
