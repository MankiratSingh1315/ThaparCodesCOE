#include <iostream>
using namespace std;

int main() {
    int sum=0, sumCol=0;
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int i=0;i<3;i++){
        sum =0;
        for(int j=0;j<4;j++){
            sum+=a[i][j];
        }
        cout<<"The sum of row "<<i+1<<" is: "<<sum<<endl;
    }

    for(int i=0;i<4;i++){
        sumCol =0;
        for(int j=0;j<3;j++){
            sumCol+=a[j][i];
        }
        cout<<"The sum of column "<<i+1<<" is: "<<sumCol<<endl;
    }

    return 0;
}