#include <iostream>
using namespace std;
void Nhap(int *n, int *m){
    cin>>*n>>*m;
}
void Nhapmang(float *Arr, int n, int m){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>Arr[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++)
            cout<<Arr[i][j]<<" ";
            cout<<"\n";
    }
}

int main(){
	int n,m;
	Nhap(&n,&m);
    float *Arr = new float[n,m];
    Nhapmang(Arr,n);
	return 0;
}
