#include<stdio.h>
#include<string.h>
#define ASCII_SIZE 256
char getmaxoccuringchar(char*str,int*maxcount){
    int count[ASCII_SIZE]={0};
    int length=strlen(str);
    for(int i=0;i<length;i++){
        count[(unsigned char)str[i]]++;
    }
    int max=-1;
    char maxchar='\0';
    for(int i=0;i<length;i++){
        unsigned char ch=str[i];
        if(count[ch]>max){
            max=count[ch];
            maxchar=str[i];
        }
    }
    *maxcount=max;
    returb maxchar;
}
int main(){
    char str[100];
    int count=0;
    printf("enter a strinh:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    if(strlen(str)==0){
        printf("the string is empty.\n");
        return 0;
    }
    char maxchar=getmaxoccuringchar(str,&count);
    printf("the maximum occuring character is '%c' and it appears %d times.\n",maxchar,count);
    return 0;
}