#include<stdio.h>
void removespaces(char*str){
    int read=0;
    int write=0;
    while(str[read]!='\0'){
        if(str[read]!=' '){
            str[write]=str[read];
            write++;
        }
        read++;
    }
    str[write]='\0';
}
int main(){
    char text[]="c pro gra m ming is f u n!";
    printf("original string:'%s'\n",text);
    removespaces(text);
    printf("modified string:'%s'\n",text);
    return 0;
}