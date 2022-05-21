#include<stdio.h>

void move( int n, char x, char y, char z){
    if( n == 1){
        printf(" %c -> %c ", x,z);
    }else{
        move( n-1, x, z, y);
        printf(" %c -> %c ", x, z);
        move( n-1, y, x, z);
    }
}

int main(void){

    move( 4, 'X', 'Y', 'Z');
    
    return 0;
}