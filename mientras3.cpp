#include <iostream>
using namespace std;
int main(){
    int max,min,n,x=0;
    bool v=1;
    cout<<"Identificador de numeros en intervalos!"<<endl<<endl;
    cout<<"Introduce los intervalos (Valor max y el valor min) : "; cin>>max>>min;
    while(v==1){
        cout<<"Introduce un valor: "; cin>>n;
        if(n<=max && n>=min){
            x++;
        }else{
            v=0;
        }
    }
    cout<<"Se encontro "<<x<<" valores correctos introducidos. ";
    return 0;
}