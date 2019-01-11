#include <iostream>
using namespace std;

int main(){
    float Ans , x=6;
    while(x<20){
        Ans=Ans+1/x;
        x=x+1;
    }
    cout << Ans;
    return 0;
}