#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char sentence[256];
    char longest_word[256]="";
    int max_length=0;
    int current_length=0;
    int start_index=0;
    printf("enter a sentence:");
    if(fgets(sentence,sizeof(sentence),stdin)==NULL){
        return 1;
    }
    sentence[strcspn(sentence,"\n")]='\0';
    int len=strlen(sentence);
    for(int i=0;i<=len;i++){
        if(isalnum((unsigned char)sentence[i])){
            if(current_length==0){
                start_index=i;
            }
            current_length++;
        }
        else{
            if(current_length>max_length){
                max_length=current_length;
                strncpy(longest_word,&sentence[start_index],max_length);
                longest_word[max_length]='\0';
            }
            current_length=0;
        }
    }
    if(max_length>0){
        printf("the longest word is:%s\n",longest_word);
        printf("length:%d\n",max_length);
    }else{
        printf("no valid words found.\n");
    }
    return 0;
}

