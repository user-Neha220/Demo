#include<stdio.h>
#include<string.h>
void rev(char*s){
int i=0;
int r=strlen(s)-1;
char t;
while(i<r){
    t=s[i];
    s[i]=s[r];
    s[r]=t;
    i++;
    r--;
}
}
int main(){
    char s[100]="abcde";
    rev(s);
    printf("%s",s);
    return 0;
}