#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> num;//宣告
//Vito's Family(CPE10406,UVA10041)
int main() {
    int n,r,s;
    cin >> n;//輸入次數
    while(n--){
        cin >> r;
        num.clear();
        for(int i=0;i<r;i++){//數據轉換
            cin >> s;//轉換到num陣列中
            num.push_back(s);
        }
        sort(num.begin(),num.end());//將號碼排序

        int mid = num [r/2];//取中間值
        int sum=0;
        for(int i =0;i < r;i++){//計算
            sum+=abs(num[i]-mid);
        }
        cout<< sum<< endl;//回傳
    }
    return 0;
}
