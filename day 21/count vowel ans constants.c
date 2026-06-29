#include<stdio.h>
int main(){
    char str[200];
    int vowels=0;
    int consonants=0;
    printf("enter a string:");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        if(ch>='A'&&ch<='Z'){
            ch=ch+32;
        }
        if(ch>='a'&&ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowels++;
            }else{
                consonants++;
            }
        }
    }
    printf("total vowels:%d\n",vowels);
    printf("total consonants:%d\n",consonants);
    return 0;
}