#include<stdio.h>
int count_words(const char*str){
    int count=0;
    int in_word=0;
    while(*str){
        if(*str==' '||*str=='\t'||*str=='\n'||*str=='\r'){
            in_word=0;
        }
        else if(in_word==0){
            in_word=1;
            count++;
        }
        str++;
    }
    return count;
}
int main(){
    char sentence[1000];
    printf("enter a sentence:");
    if(fgets(sentence,sizeof(sentence),stdin)!=NULL){
        int words=count_words(sentence);
        printf("total number of words:%d\n",words);
    }
    return 0;
}