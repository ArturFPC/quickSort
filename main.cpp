#include <iostream>
//Autor: Artur Francisco Pereira Carvalho
using namespace std;
const int maxTam = 14;

int particao(int A[],int p,int r){
    int x = A[r];
    int i= p-1;
    for (int j = p; j<=r-1; j++){
        if(A[j]<= x){
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}
void quickSort(int A[],int p,int r){
    if (p<r){
        int q = particao(A, p, r);
        quickSort(A, p, q-1);
        quickSort(A, q+1, r);
    }
}

int main(){
    int A[]={9 , 10 , -1, 3, 6, 2, 1, -3, 1, 0, -2, 15, 8, -7, 0};
    int p = 0;
    quickSort(A, p, maxTam);
    cout<< "Vetor 'A' ordenado: [";
    for (int i = p; i<= maxTam-1; i++){
        cout<< A[i]<<" , ";
    }
    cout<< A[maxTam]<<"]";
    return 0;
};
