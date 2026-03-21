#include <stdio.h>
#include <stdio.h>
void inverte(char s[]){
    int tam;
    while(s[tam]!='\0'){
        tam++;
    }
    char espelho[100];
    for (int i=0;i<tam;i++){
        espelho[i]=s[tam-1-i];
    }
    print("%s \n",espelho);
}

int main(){
    char s[100];
    while(scanf("%s",s)!='EOF'){
        invrter(s);
    }
    return 0;
    
}
