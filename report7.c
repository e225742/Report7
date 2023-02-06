#include <stdio.h>

void Comparison(int* a, int* b){
    int sco;
    sco = *a;
    *a = *b;
    *b = sco;
    return;
}

int main(){
    const int SIZE = 5; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {0, 60, 70, 100, 90};
    //処理コード
    int C = (SIZE * SIZE - SIZE)/2;
    int i;
    int k;
    int num = 0;
    int num2 = num + 1;

    printf("scores = ");
    for(k = 0; k < SIZE; k++){
        printf("%d ", scores[k]);
    }

    for(i = 0; i < C; i++){
        if(scores[num] < scores[num2]){
            Comparison(&scores[num], &scores[num2]);
        }
        num2 += 1;
        if(num2 == SIZE){
            num += 1;
            num2 = num + 1;
        }
    }

    printf("\nresults = ");
    for(k = 0; k < SIZE; k++){
        printf("%d ", scores[k]);
    }
    return 0;
}