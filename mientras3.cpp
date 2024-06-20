#include <iostream>
using namespace std;
int main(){
    int max,min,n,x=0;
    bool v=1;
    cout<<"Valor max, valor min: "; cin>>max>>min;
    while(v==1){
        cin>>n;
        if(n<=max && n>=min){
            x++;
        }else{
            v=0;
        }
    }
    cout<<x;
    return 0;
}