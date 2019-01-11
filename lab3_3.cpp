#include <iostream>
using namespace std;

int main(){
    float Ans , x=2;
    while(x<70){
        Ans=Ans+1/x;
        x=x+1;
    }
    cout << Ans;
    return 0;
}