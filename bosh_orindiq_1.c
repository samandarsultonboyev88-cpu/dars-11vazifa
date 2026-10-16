#include <stdio.h>
int main(){
    int avtobus[10];
    for(int i=0; i<10; i++){
        scanf("%d", &avtobus[i]);
    }
    int orindiq;
    scanf("%d", &orindiq);
    if(avtobus[orindiq - 1] == 0){
        printf("Joy mavjud\n");

    }else{
        printf("Joy band\n");
    } 
    return 0;
}