#include <iostream>
using namespace std;
int main() {
    int s, t, a, b, n, m ;
    cin >> s >> t ;
    cin >> a >> b ;
    cin >> m >> n ;
    int apples ;
    int count_apples=0;
    for(int i=0;i<m; i++) {
        cin>>apples;
        apples+=a;
        if(apples>=s && apples<=t)
            count_apples ++;
    }
    int oranges ;
    int count_oranges=0;
    for(int i=0;i<n; i++) {
        cin>>oranges;
        oranges+=b;
        if(oranges>=s && oranges<=t)
            count_oranges ++;
    }
    cout << count_apples << endl;
    cout << count_oranges << endl; 
    return 0;
}
