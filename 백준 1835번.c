#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

Node* new_node(int data){
    Node* node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

void push_front(Node** head, Node** tail, int data){
    Node* node = new_node(data);
    if(*head == NULL){
        *head = node;
        *tail = node;
    } else{
        node->next = *head;
        (*head)->prev = node;
        *head = node;
    }
}

void push_back(Node** head, Node** tail, int data){
    Node* node = new_node(data);
    if(*tail == NULL){
        *head = node;
        *tail = node;
    } else{
        node->prev = *tail;
        (*tail)->next = node;
        *tail = node;
    }
}

int pop_back(Node** head, Node** tail){
    if(*tail == NULL){
        return -1;
    }
	Node* temp = *tail;
	
	int data = temp->data;
    *tail = temp->prev;

    if(*tail){
        (*tail)->next = NULL;
    } else{
        *head = NULL;
    }
    free(temp);
    return data;
}

int peek_last(Node** tail){
    if(*tail){
        return (*tail)->data;
    }
    return -1;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int n;
    scanf("%d", &n);

    if(n == 1){
        printf("1\n");
        return 0;
    }
    push_front(&head, &tail, n);
    push_front(&head, &tail, n-1);
    n--;

    while(1){
        for(int r = n; r > 0; r--){
            int last = peek_last(&tail);
            push_front(&head, &tail, last);
            pop_back(&head, &tail);
        }

        if(n == 1) break;
        push_front(&head, &tail, n-1);
        n--;
    }
    Node* curr = head;
    while(curr){
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");

    return 0;
}
