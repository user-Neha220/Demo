#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int arerotations(const char*str1,const char*str2){
    int len1=strlen(str1);
    int len2=strlen(str2);
    if(len1!=len2){
        return 0;
    }
    char*temp=(char*)malloc(sizeof(char)*(len1*2+1));
    if(temp==NULL){
        printf("memory allocation failed.\n");
        return 0;
    }
    strcpy(temp,str1);
    strcat(temp,str1);
    char*match=strstr(temp,str2);
    free(temp);
    return(match!=NULL);
}
int main(){
    char str1[]="ABCD";
    char str2[]="CDAB";
if(arerotations(str1,str2)){
    printf("the strings\"%s\"and\"%s\"are rotations of each other.\n",str1,str2);
}else{
    printf("the strings\"%s\"and\"%s\"are not rotations of each other.\n",str1,str2);
}
return 0;
}