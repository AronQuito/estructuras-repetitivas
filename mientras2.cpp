#include <iostream>
using namespace std;
int main(){
    int n=1;
    cout<<"Programa 'parar cuando escriba 0' :"<<endl;
    while (n!=0){
        cout<<"Escriba un valor: "; cin>>n;
    }
    cout<<"El programa se ha detenido"<<endl;
    system("cls");
    return 0;
}