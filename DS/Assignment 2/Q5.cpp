#include <iostream>
using namespace std;

class diagonalMatrix{
    private:
        int n;
        int *A;
    public:
        diagonalMatrix(int n){
            this->n=n;
            A=new int[n];
        }
        void set(int i,int j,int x);
        int get(int i,int j);
        void display();
        ~diagonalMatrix(){
            delete []A;
        }
};

void diagonalMatrix::set(int i,int j,int x){
    if(i==j){
        A[i-1]=x;
    }
}

int diagonalMatrix::get(int i,int j){
    if(i==j){
        return A[i-1];
    }
    else{
        return 0;
    }
}

void diagonalMatrix::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<A[i]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

class triDiagonalMatrix{
    private:
        int n;
        int *A;
    public:
        triDiagonalMatrix(int n){
            this->n=n+2*(n-1);
            A=new int[this->n];
        }
        void set(int i,int j,int x);
        int get(int i,int j);
        void display();
        ~triDiagonalMatrix(){
            delete []A;
        }
};

void triDiagonalMatrix::set(int i,int j,int x){
    if(i-j==1){
        A[i-2]=x;
    }
    else if(i-j==0){
        A[n-1+i-1]=x;
    }
    else if(i-j==-1){
        A[2*n-1+i-1]=x;
    }
}

int triDiagonalMatrix::get(int i,int j){
    if(i-j==1){
        return A[i-2];
    }
    else if(i-j==0){
        return A[n-1+i-1];
    }
    else if(i-j==-1){
        return A[2*n-1+i-1];
    }
    else{
        return 0;
    }
}

void triDiagonalMatrix::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i-j==1){
                cout<<A[i-2]<<"\t";
            }
            else if(i-j==0){
                cout<<A[n-1+i-1]<<"\t";
            }
            else if(i-j==-1){
                cout<<A[2*n-1+i-1]<<"\t";
            }
            else{
                cout<<"0\t";
            }
        }
        cout<<endl;
    }
}

// all the code below this is generated by chat gpt🫠
class lowerTriangularMatrix{
    private:
        int n;
        int *A;
    public:
        lowerTriangularMatrix(int n){
            this->n=n;
            A=new int[((n*(n+1))/2)];
        }
        void set(int i,int j,int x);
        int get(int i,int j);
        void display();
        ~lowerTriangularMatrix(){
            delete []A;
        }
};

void lowerTriangularMatrix::set(int i,int j,int x){
    if(i>=j){
        A[((i*(i-1))/2)+(j-1)]=x;
    }
}

int lowerTriangularMatrix::get(int i,int j){
    if(i>=j){
        return A[((i*(i-1))/2)+(j-1)];
    }
    else{
        return 0;
    }
}

void lowerTriangularMatrix::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                cout<<A[((i*(i-1))/2)+(j-1)]<<"\t";
            }
            else{
                cout<<"0\t";
            }
        }
        cout<<endl;
    }
}

class upperTriangularMatrix{
    private:
        int n;
        int *A;
    public:
        upperTriangularMatrix(int n){
            this->n=n;
            A=new int[((n*(n+1))/2)];
        }
        void set(int i,int j,int x);
        int get(int i,int j);
        void display();
        ~upperTriangularMatrix(){
            delete []A;
        }
};

void upperTriangularMatrix::set(int i,int j,int x){
    if(i<=j){
        A[((n*(i-1))-((i-2)*(i-1))/2)+(j-i)]=x;
    }
}

int upperTriangularMatrix::get(int i,int j){
    if(i<=j){
        return A[((n*(i-1))-((i-2)*(i-1))/2)+(j-i)];
    }
    else{
        return 0;
    }
}

void upperTriangularMatrix::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                cout<<A[((n*(i-1))-((i-2)*(i-1))/2)+(j-i)]<<"\t";
            }
            else{
                cout<<"0\t";
            }
        }
        cout<<endl;
    }
}

class symmetricMatrix{
    private:
        int n;
        int *A;
    public:
        symmetricMatrix(int n){
            this->n=n;
            A=new int[((n*(n+1))/2)];
        }
        void set(int i,int j,int x);
        int get(int i,int j);
        void display();
        ~symmetricMatrix(){
            delete []A;
        }
};

void symmetricMatrix::set(int i,int j,int x){
    if(i>=j){
        A[((i*(i-1))/2)+(j-1)]=x;
    }
    else{
        A[((j*(j-1))/2)+(i-1)]=x;
    }
}

int symmetricMatrix::get(int i,int j){
    if(i>=j){
        return A[((i*(i-1))/2)+(j-1)];
    }
    else{
        return A[((j*(j-1))/2)+(i-1)];
    }
}


void symmetricMatrix::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                cout<<A[((i*(i-1))/2)+(j-1)]<<"\t";
            }
            else{
                cout<<A[((j*(j-1))/2)+(i-1)]<<"\t";
            }
        }
        cout<<endl;
    }
}