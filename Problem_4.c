//
// Created by gemini on 11/2/16.
//

#include <stdio.h>
#include <string.h>

int sort_(const char first, const char second);

void insertion(int index_, char* array);

int main4(void){
    int len = 0;
    char s[100] = "\0";

    while(scanf("%s",s) == 1){

        len = strlen(s);

        if(len == 1)
            printf("%s\n", s);


        for(int index_ = 1;  index_ < len; index_++){
            insertion(index_, s);
            printf("%s\n", s);
        }

    }

    return 0;
}

int sort_(const char first, const char second){
    if(first > second)
        return 1;
    else
        return -1;
}

void insertion(int index_, char* array){
    int delta = index_ - 1;
    char insert;

    insert = array[index_];

    while(array[delta] > insert && delta >=0 ){
        array[delta+1] = array[delta];
        delta = delta-1;
    }

    array[delta+1] = insert;

}
