

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node{
    char Name;
    Node* Edge;
};

void parseEntry(char* entry, Node* g);

int findIndex(Node* edge, int size, char name);

int main(void){



    return 0;
}

void parseEntry(char* entry, Node* g){
    int len = (int)strlen(entry);

    if(g == NULL){
        g = calloc(1,sizeof(Node));
        g->Name = entry[0];
        g->Edge = calloc(len-2,sizeof(Node));
        for(int i = 2; i < len; i++){
            g->Edge[i-2].Name = entry[i];
        }
    } else{
        //findIndex(g->Edge, len-2,entry[i]);
    }
}


int findIndex(Node* edge, int size, char name){
    for (int i = 0; i < size; ++i) {
        if (edge[i].Name == name)
            return i;
    }
}