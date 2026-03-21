#include <stdio.h>
#include <stdio.h>
void inverter(char s[]){
    int tam=0;
    while(s[tam]!='\0'){
        tam++;
    }
    char espelho[100];
    for (int i=0;i<tam;i++){
        espelho[i]=s[tam-1-i];
    }
    espelho[tam] = '\0';
    printf("%s",espelho);
}

int tp4(){
    char s[100];
    while(scanf("%s",s)!= EOF ){
        inverter(s); 
    }
    return 0;
    
}
