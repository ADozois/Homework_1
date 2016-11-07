//
// Created by gemini on 11/2/16.
//

#include <stdio.h>
#include <string.h>

int sort(const char first, const char second);

void bubble(int index, char* array, int* flag_swap);

int main3(void){
    int len = 0, flag = 0, first = 0;
    int* flag_ptr = &flag;
    char s[100] = "\10";

    while(scanf("%s",s) == 1){
        len = strlen(s);
        //s[len-1] = '\0';
        //len--;

        do{
            *flag_ptr = 0;
            for(int index_ = 0 ; index_ < len-1; index_++){
                bubble(index_, s, flag_ptr);
            }
            if (*flag_ptr == 1 || first != 1){
                first = 1;
                printf("%s\n",s);
            }

        }while(*flag_ptr == 1);
    }
    return 0;
}


int sort(const char first, const char second){
    if(first <= second)
        return 1;
    else
        return -1;
}

void bubble(int index, char* array, int* flag_swap){

    char tmp = 0;

    if(sort(array[index],array[index+1]) == -1){
        tmp = array[index];
        array[index] = array[index+1];
        array[index+1] = tmp;
        *flag_swap = 1;
    }
}
