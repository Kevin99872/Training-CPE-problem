//Divide,But Not Quite Conquer!(CPe10419-UVA10190)
#include <iostream>
using namespace std;
int main() {
    int n,m;
    while(cin >> n>> m){
        if((n<2)||(m<2)){
            cout << "Boring!" << endl;
            continue;
        }
        int backup = n;
        while(n%m==0 && n>1){
            n=n/m;
        }
        if(n!=1){
            cout << "Boring!" << endl;
        }else{
            n = backup;
            while(n%m ==0&&n>1){
                cout << n << " ";
                n=n/m;
            }
            cout << "1" << endl;
        }
    }
    return 0;
}
