#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isAscendingNumber(char *word){
    for(int i=0;i<strlen(word)-1;i++){
        if(word[i]>word[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    char *str[]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety","hundred"};
    int count=sizeof(str)/sizeof(str[0]);
    for(int i=0;i<count;i++){
        if(isAscendingNumber(str[i])){
            printf("Found the letter:%s",str[i]);
        }
    }
}
