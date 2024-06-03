#include <iostream>
using namespace std;

// int main(){
// 	int N;
// 	std::cin>>N;
// 	int h[N];
// 	for(int j = 0; j < N; j++){
// 		std::cin>>h[j]; 
// 	}

// 	int keunt = 0;
// 	int b = 0;
// 	int k = 0;

// for(int i = 0; i < N; i++){
// 	if(h[i] < h[i+1]){
// 		b = h[i+1];
// 		k = h[i];
// 		keunt = keunt + (b-k);
// 	}
// 	else if(h[i] > h[i+1]){
// 		b = 0;
// 		k = h[i+1];
// 	}
// }
	
// 	std::cout<<keunt; 
// 	return(0);
// }

int main(){
    int N;
    cin >> N;
    int h[N];
    
    for(int i = 0; i < N; i++){
        cin >> h[i]; 
    }

    int keunt = 0;

    for(int i = 1; i < N; i++){
        if(h[i] > h[i - 1]){
            keunt += h[i] - h[i - 1];
        }
    }

    cout << keunt; 
    return 0;
}
