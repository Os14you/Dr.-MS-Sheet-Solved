#include <iostream>
using std::cout,std::cin;
int main(){
    int oranges,juicer_size,waste_size,waste {},empties {};
    cin>>oranges>>juicer_size>>waste_size;
    while(oranges--){
        int orange;
        cin>>orange;
        if(orange > juicer_size) continue;
        else {
            waste+=orange;
            if(waste > waste_size) empties++,waste = 0;
        }
    }
    cout<<empties;
    return 0;
}