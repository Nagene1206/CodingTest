#include <iostream>
using namespace std;

int main() {
    int v,a,b,day=1;
    cin >> a >> b >> v;
    
    day += (v-a)/(a-b);
    if((v-a)%(a-b)!=0)
        day++;
    
    if(a>=v)
        cout << "1";
    else
        cout << day;
    return 0;
}