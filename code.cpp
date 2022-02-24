// beecrowd 1047 Game Time with Minutes
#include <iostream>
using namespace std;
 
int main() {
    int sh, eh, sm, em, d=0, dh=0, dm=0;
    cin >> sh >> sm >> eh >> em;
    if(sh > 23 && eh >23 && em > 59 && sm > 59){
        cout <<"Please enter a valid input:"<<endl;
        cin >> sh >> sm >> eh >> em;
    }
    if(sh<eh){
        d = ((eh*60)+em)-((sh*60)+sm);
        dh = d/60;
        dm = d%60;
    }else{
        d = 24*60-(((sh*60)+sm)-((eh*60)+em));
        dh = d/60  ;
        dm = d%60;
    }
    if(dh == 24 && dm >0){
        dh = 0;
    }
    cout << "O JOGO DUROU " <<  dh <<" HORA(S) E "<< dm << " MINUTO(S)"<< endl; 
    system("pause");
    return 0;
}