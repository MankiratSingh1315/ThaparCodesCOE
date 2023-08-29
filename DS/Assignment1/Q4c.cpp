#include <iostream>
using namespace std;

int main() {
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int b[4][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            b[j][i]=a[i][j];
        }
    }

    cout<<"The transpose of the matrix is: "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}