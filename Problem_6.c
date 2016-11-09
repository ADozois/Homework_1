

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node Node;
typedef struct Graph Graph;

struct Node{
    char Name;
    int Number;
    char* Edge;
};

struct Graph{
    int Number;
    Node* Nodes;
};

void createGraph(Graph* g, int number);

void CreateNode(Node* node, char* s);

void parseEntry(char* entry, Node* g);

int findIndex(Node* edge, int size, char name);

int main(void){
    char s[100] = "", p[100] = "";
    int offset= 0, nbrNode = 0;
    Graph* Graph = NULL;


    while(scanf("%s",s) != EOF) {
        offset = strlen(p);
        for (int i = 0; i < strlen(s); i++) {
            p[i + offset] = s[i];
        }
        nbrNode++;
    }

 //   createGraph(Graph,nbrNode);

    printf("GGG");

    return 0;
}

void createGraph(Graph* g, int number){
    g = (struct Graph*) malloc(sizeof(struct Graph));
    g->Number = number;
    g->Nodes = (struct Node*) malloc(sizeof(struct Node));
}

void CreateNode(Node* node, char* s){
    parseEntry(s,node);
}

void parseEntry(char* entry, Node* g){
    int len = (int)strlen(entry);

    g->Name = entry[0];
    g->Number = len -2;
    g->Edge = (char*) malloc(sizeof(char));

    for (int i = 2; i < len; i++) {
        g->Edge[i-2] = entry[i];
    }
}


int findIndex(Node* edge, int size, char name){
    for (int i = 0; i < size; ++i) {
        if (edge[i].Name == name)
            return i;
    }
}

