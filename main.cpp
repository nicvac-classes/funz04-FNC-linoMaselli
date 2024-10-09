#include <iostream>
using namespace std;


int inputPositivo(){
    int x;
    do{
        cout<<"ins num positivo"<<endl;
        cin>>x;
    }while(x<=0);
    return x;
}

int somma(int n1,int n2){
    int somm;
    somm=n1+n2;
    return somm;
}

int sottrazione (int n1, int n2){
    int sot;
    sot= n1-n2;
    return sot;
}

int moltiplicazione (int n1, int n2){
    int molt;
    molt=n1*n2;
    return molt;
}

float divisione (float n1, float n2){
    float div;
    div= n1/n2;
    return div;
}

int potenza (int b, int e){
    int pot;
    pot=1;
    for(int i=0; i<e; i++){
        pot= pot*b;
    }
    return pot;
}

int main() {
    int n1, n2, somm, sot, molt, pot;
    float div;
    n1=inputPositivo();
    n2=inputPositivo();
    somm= somma(n1, n2);
    sot= sottrazione(n1, n2);
    molt= moltiplicazione (n1, n2);
    div= divisione(n1, n2);
    pot= potenza(n1, n2);
    cout<<"la somma è pari a "<<somm<<endl;
    cout<<"la sottrazione è pari a "<<sot<<endl;
    cout<<"la moltiplicazione è pari a "<<molt<<endl;
    cout<<"la divisione è pari a "<<div<<endl;
    cout<<"la potenza è pari a "<<pot<<endl;
    return 0;
}

