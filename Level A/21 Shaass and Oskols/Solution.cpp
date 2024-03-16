#include <iostream>
using std::cin,std::cout;
int main(){
    int wires,shots;
    cin>>wires;
    int birds[wires];
    for(int i=0;i<wires;i++)
        cin>>birds[i];
    cin>>shots;
    while(shots--){
        int wire,shot;
        cin>>wire>>shot;
        if(wire > 1)
            birds[wire-2]+=shot-1;
        if(wire < wires)
            birds[wire]+=birds[wire-1]-shot;
        birds[wire-1]=0;
    }
    for(int i=0;i<wires;i++)
        cout<<birds[i]<<"\n";
    return 0;
}