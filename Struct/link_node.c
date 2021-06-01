//
// Created by sivan on 2021/6/2.
//

#include "main.h"

typedef struct LinkNode {
    int value;
    struct LinkNode *next;
} LinkNode;

LinkNode *CreateLinkNode(int value) {
    LinkNode *node = malloc(sizeof(LinkNode));

    if (!node) {
        //
        exit(0);
    }
    node->value = value;
    node->next = NULL;
    return node;
}


void DestroyNode(LinkNode **node_ptr) {
    (*node_ptr)->next = NULL;
    free(*node_ptr);
    *node_ptr = NULL;
}

LinkNode *CreateList(int array[], int length) {
    if (length <=0) return NULL;
    LinkNode *head = CreateLinkNode(array[0]);

    LinkNode *current = head;

    for (int i = 1; i < length; ++i) {
        current->next = CreateLinkNode(array[i]);
        current = current->next;
    }

    return head;
}

void DestroyList(LinkNode **head) {
    if (!head || (*head)) return;

    LinkNode *current = *head;
    while (current) {
        LinkNode *to_be_destroy = current;
        current = current->next;
        DestroyNode(&to_be_destroy);
    }
    *head = NULL;
}

void InsertNodeK(LinkNode **head, int value, int index) {
    if (!head || index < 0) return;

    LinkNode *new_node = CreateLinkNode(value);

    if (index == 0) {
        new_node->next = *head;
        *head = new_node;
    } else {
        if (!(*head)) {
            *head = CreateLinkNode(0);
        }
        LinkNode *current = *head;
        // find index node
        while (index > 1) {
            if (!current->next) {
                current->next = CreateLinkNode(0);
            }
            current = current->next;
            index--;
        }
        // 1-> 2-> 3
        // 1-> 2->4-> 3   // current = 2
        new_node->next = current->next;
        current->next = current;
    }
}









void InsertNode(LinkNode **head, int value, int index) {
    if (!head || index < 0) return;

    LinkNode *new_node = CreateLinkNode(value);

    if (index == 0) {
        new_node->next = *head;
        *head = new_node;
    } else {
        if (!(*head)) {
            *head = CreateLinkNode(0);
        }
        LinkNode *current = *head;

        while (index > 1) {
            if (!current->next) {
                current->next = CreateLinkNode(0);
            }
            current = current->next;
            index--;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

void PrintLinkList(LinkNode *head) {
    while (head) {
        PRINT_INT(head->value);
        head = head->next;
    }
}
// array resize cost too much
// 1 -> 2 -> 3 -> 4 -> 5
int main() {
//    LinkNode *node = CreateLinkNode(0);
//    DestroyNode(&node);
    int array[] = {0, 1, 2, 3, 4};
    LinkNode *head = CreateList(array, 5);
//    PrintLinkList(head);
    InsertNode(&head, 100, 10);
    PrintLinkList(head);
    DestroyList(&head);
    PRINT_HEX(head);

    return 0;
}
