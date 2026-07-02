#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void removeduplicates(char*str){
    bool seen[256]={false};
    int writeindex=0;
    int readindex=0;
    while (str[readindex]!='\0'){
        unsigned char currentchar=(unsigned char)str[readindex];
        if(!seen[currentchar]){
            seen[currentchar]=true;
            str[writeindex]=str[readindex];
            writeindex++;
        }
        readindex++;
    }
    str[writeindex]='\0';
}
int main(){
    char text[]="programming language";
    printf("original string:%s\n",text);
    removeduplicates(text);
    printf("modified string:%s\n",text);
    return 0;
}
