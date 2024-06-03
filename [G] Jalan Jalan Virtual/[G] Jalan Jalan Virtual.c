#include <stdio.h>

//0.2 Detik/Test Case dan Max: 16mb

int main(){
    //tc = test case
    int tc;
    scanf("%d", &tc);

    char jj[]={'T', 'U', 'U', 'B', 'B', 'B', 'S', 'S', 'S', 'S'};

    int masukkan[tc];
    printf("input: \n");
    for(int i = 0; i < tc; i++){
        scanf("%d", &masukkan[i]);
    }

    printf("output: \n");
    for(int i = 0; i < tc; i++){
        int L = masukkan[i];
    
        int n = 0, m = 0, arah = 0;

        for(int i = 0; i < L; i++){
            char jejak = jj[i % 6]; 

            if(jejak == 'T'){
                n++;
            }else if(jejak == 'U'){
                m++;
            }else if(jejak == 'B'){
                n--;
            }else if(jejak == 'S'){
                m--;
            }

        }

        printf("%d %d\n", n, m); 
         
    }

    return 0;
}
