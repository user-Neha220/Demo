#include<stdio.h>
#include<string.h>
#define MAX_CHAR256
char findfirstnonrepeating(char*str){
    int freq[MAX_CHAR]={0};
    int i;
    for(i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;
    }
    for(i=0;str[i]!='\0';i++){
        if(freq[(unsigned char)str[i]]==1){
            return str[i];
        }
    }
    return'\0';
}
int main(){
    char str[100];
    printf("enter a string:");
    if(fgets(str,sizeof(str),stdin)){
        str[strcspn(str,"\n")]='\0';
    }
    char result=findfirstnonrepeating(str);
    if(result!='\0'){
        printf("the first non-repeating character is:'%c'\n",result);
    }else{
        printf("all characters are repeating or the string is empty.\n");
    }
    return 0;
}
