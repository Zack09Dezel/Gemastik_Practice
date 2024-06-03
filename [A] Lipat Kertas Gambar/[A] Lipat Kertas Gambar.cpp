#include <iostream>
using namespace std;

//1 Detik /Test Case dan max 256MB

struct Variable {
    int M, P, Q;
};

int main(){
    int N;
    cin >> N;
    Variable LipatVariable[N];
    
    for(int i = 0; i < N; i++){
        cin >> LipatVariable[i].P >> LipatVariable[i].Q >> LipatVariable[i].M;
    }
    for(int j = 0; j < N; j++){
        //beda
        for(int i = 0; i < LipatVariable[j].M; i++){
            if (LipatVariable[j].P >= LipatVariable[j].Q){
                LipatVariable[j].P /= 2;
            }
            else{
                LipatVariable[j].Q /= 2;
            }
        }
        //
        if(LipatVariable[j].P >= LipatVariable[j].Q){
            cout << LipatVariable[j].P << " "  << LipatVariable[j].Q << endl;
        }
        else {
            cout << LipatVariable[j].Q << " " << LipatVariable[j].P << endl;
        }
    }

    return 0;
}
