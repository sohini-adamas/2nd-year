#include <stdio.h>

int main() {
    char str[40];
    int length=0;flag=1;
    printf("Enter String:");
    gets(str);
    for(int i=0;str[i]!='/0';i++){
        length++;
    }
    for(int i=0;i<length/2;i++){
        if(str[i]!=str[length-1-i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("Pallindrome");
    }
    else{
        printf("Not Pallindrome");
    }
    return 0;
}
