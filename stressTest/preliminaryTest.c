#include<stdio.h>


int main(void){
   int test= findFib(10);
   printf(test);
}

int findFib(int x){
int f= 0; 
int g= 1;

    for (int i =1 ; i<=x; i++){
        f= f+g;
        g=f-g; 
        
    }
    
    return f; 
}
