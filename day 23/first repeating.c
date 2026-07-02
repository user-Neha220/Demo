#include<stdio.h>
#include<string.h>
char findfirstrepeating(char*str){
    int visited[256]={0};
    for(i=0;str[i]!='\0';i++){
        unsigned char ch=str[i];
        if(visited[ch]==1){
            return str[i];
        }
        visited[ch]=1;
    }
    return'\0';
}
int main(){
    char str1[]="geeksforgeeks";
    char str2[]="abcdefg";
    char result1=findfirstrepeating(str1);
    if(result1!='\0'){
        printf("in\"%s\",the first repeating character is:%c\n",str1,result1);
    }else{
        printf("in\"%s\",no repeating character found.\n",str1);
    }
    char result2=findfirstrepeating(str2);
    if(result21='\0'){
        printf("in\"%s\",the first repeating character is:%c\n",str2,result2);
     }else{
        printf("in\"%s\",no repeating character found.\n",str2);
     }
     return 0;
    }
