#include<stdio.h>
#include<math.h>

int main(){

    printf("calcular el factorial de un numero\n");
    printf("dame un numero:  \n");
    int num;
    scanf("%d", &num);
    long fact = 1;
    
    for(int i = 1; i <= num ; i++) {
        fact = fact*i;
        
        
}
    printf("factorial = %ld",fact);



}










