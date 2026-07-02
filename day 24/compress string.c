#include<stdio.h>
#include<string.h>
void compressstring(const char*src,char*dest){
    int i=0;
    int j=0;
    int len=strlen(src);
    while(i<len){
        dest[j++]=scr[i];
        int count=1;
        while(i+1<len && scr[i]==src[i+1])
        {
            count++;
            i++;
        }
        j+=sprintf(&dest[j],"%d",count);
        i++;
    }
    dest[j]='\0';
}
int main(){
    char originalstr[]="AAABBCDDDD";
    char compressedstr[200];
    printf("original string:%s\n",originalstr);
    compressstring(originalstr,compressedstr);
    printf("compressed string:%s\n",compressedstr);
    return 0;
}