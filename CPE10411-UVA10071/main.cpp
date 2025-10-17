//Back to High School Physics(CPE10411-UVA10071)
#include <stdio.h>
using namespace std;
int comDiskp (int v,int t){
    return 2*v*t;
}

int main() {
    int v,t;
    while (scanf("%d%d",&v,&t)!=EOF){
        printf("%d/n", comDiskp(v,t));
    }
    return 0;

}
