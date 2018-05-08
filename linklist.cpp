#include<stdio.h>
#include <stdlib.h>
#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node* link;
};

struct Node* head;

void print(){
    struct Node* temp;
    temp = head;
    while(temp !=NULL){
        printf("%d",temp->data);
        temp = temp ->link;
        printf(" ");
    }
    printf(" \n");
}
void insert(int value){
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = value;
    temp->link = NULL;
    if(head == NULL){
        head= temp;
    }else{
        struct Node* t;
        t = head;
        while (t -> link != NULL){
            t = t-> link;
        }
        t -> link = temp;
    }
}

void beginInsert(int value){
        struct Node* temp= (struct Node*)malloc( sizeof(struct Node));
        temp->data = value;
        temp -> link = head;
        head = temp;
}

int main(){
    head = NULL;


    insert(1);
    insert(4);
    insert(3);

    beginInsert(1);
    beginInsert(3);
    beginInsert(4);

    print();
    return 0;
}
