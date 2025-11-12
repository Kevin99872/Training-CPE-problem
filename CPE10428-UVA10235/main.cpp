//Simply Emirp(CPE10428-UVA10235)
#include <iostream>
using namespace std;
int com[10000000];
int main() {
    for (int i =0 ; i< 1000;i++){
        if(com[i])continue;
        for(int j = i+i;j < 1000000;j+=i) {
            com[j] = 1;
        }
    }
    int n,rn;
    cout <<"OK"<< endl;
    while(cin >> n){
        int sn =n;
        for(rn=0;n;n/=10)rn = rn*10+(n%10);
        if(com[sn])cout << sn << "is not prime";
        else if (com[rn]) cout  << sn << "is prime";
        else if (sn == rn) cout << sn << "is prime";
        else cout << sn << "is emirp";
        cout << endl;
    }

    return 0;
}
