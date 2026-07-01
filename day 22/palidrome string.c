#include<stdio.h>
#include<string.h>
int ispalibdrome(char str[]){
    int left=0;
    int right=strlen(str)-1;
    while(left<right){
        if(str[left]!=str[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main(){
    char str[100];
    printf("enter a string:");
    scanf("%99s",str);
    if(ispalibdrome(str)){
        printf("\"%s\" is a palindrome.\n",str);
    }else{
        printf("\"%s\" is not palindrome.\n",str);
    }
    return 0;
}