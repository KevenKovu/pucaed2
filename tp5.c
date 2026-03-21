#include <stdio.h>
#include <stdlib.h>

int soma (char *s, int resp, int tam){
    if (s=='EOF'){
        resp =0;
    }
    else{
        resp+= soma(s,*(s+1));
    }
    return resp;
}

int main(){
    char s [100];
    int tam=0;
    wile (scanf("%s",s)!='EOF'){
        
        int resp=soma(s,0);
        
        printf("%d",resp);soma(s));
    }
}