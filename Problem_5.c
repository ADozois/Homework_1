
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const char first, const char second);

void merge_sort(char* array, int len);

void merge(char* array_a, char* array_b, char* result_array);

int main5(void){
    int len = 0;
    char s[100] = "\0";



    while(scanf("%s",s) == 1){
        len = strlen(s);
        if(len == 1){
            printf("%s",s);
            return 0;
        }
        merge_sort(s,len);
    }



    return 0;
}


int compare(const char first, const char second){
    if(first <= second)
        return 1;
    else
        return -1;
}

void merge_sort(char* array, int len){
    char* arr1 = calloc(len/2,sizeof(char));
    char* arr2 = calloc(len/2,sizeof(char));


    if(len <= 1){
        free(arr1);
        free(arr2);
        return ;
    }

    memcpy(arr1, array, (len/2));
    memcpy(arr2, array+(len/2), (len/2));
    merge_sort(arr1, strlen(arr1));
    merge_sort(arr2, strlen(arr2));

    merge(arr1, arr2, array);

    free(arr1);
    free(arr2);
}


void merge(char* array_a, char* array_b, char* result_array){
    int i = 0, j = 0;

    for(int k = 0; k < strlen(result_array); k++){

        if(array_a[i] != '\0' && (array_b[j] == '\0' || compare(array_a[i], array_b[j]) == 1)){
            result_array[k] = array_a[i];
            i++;
        } else if(array_b [j] != '\0' && (array_a[i] == '\0' || compare(array_a[i], array_b[j]) == -1)){
            result_array[k] = array_b[j];
            j++;
        }
    }

    printf("%s\n",result_array);
}
