#include "DisplayMessageEndpoint.h"
#include "DisplayMessageEndpoint.cpp"
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
using namespace std;

struct Node {
	struct Node* next;
	char data[100];
};
struct nodelist {
	struct node* head;
};

void insert(struct nodelist* list, char *value);
void display(struct nodelist* list);





class LRUCache{


public:
	LRUCache(int capacity) {
		capacity = 10;
	}
	int get(int key) {
		
		}
	}
	void set(int key, int value) {

	}


};




struct Node {
	int id;
	char *txt;
	struct Node *next;
};
Node *head = NULL;
Node *curr = NULL;

Node* listadd(const char* txt, bool toEnd) {
	Node* temp = head;
	while (temp) {
		if (strcmp(temp, txt) == 0) {
			temp->id++;
			return temp;
		}
		temp = temp->next;
	}

	Node *ptr = malloc(sizeof(Node));
	ptr->id = 0;
	ptr->txt = malloc(strlen(txt) + 1);
	strcpy(ptr->txt, txt);
	ptr->next = NULL;

	if (toEnd) {
		curr->next = ptr;
		curr = ptr;
	}
	else {
		ptr->next = head;
		head = ptr;
	}
	return ptr;
}
char* readTxt() {
	static char buffer[100];
	scanf("%s", buffer);
	printf("ListAdd() call");
	listadd(buffer);
	return buffer;
}

void freelist() {
	Node* ptr = head;
	Node* temp = 0;
	while (ptr) {
		temp = ptr->txt;
		free(ptr->txt);
		free(ptr);
		ptr = temp;
	}
}
