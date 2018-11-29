#include <iostream>
#include "DisplayMessageEndpoint.h"
#include <Windows.h>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

typedef struct Node Node;

using namespace std;

std::string GetDestinationFrom(int destinationId)
{
	DisplayMessageDestinationService service;
	return service.GetDestinationName(destinationId);

	//This call is really slow!!!

	//Uppgift: Skapa en LRU cache...
	//Du f�r dock spara h�gst 10 st f�r det finns s� lite minne i displayen

	//1. Skapa en C-only linkedlist - varf�r? - den ska anv�ndas i en c-only device senare.. 
	//struct Node
	//{
	//	int id;
	//	char *txt;
	//	struct Node *next;
	//};
	//kom ih�g att malloc och free p� b�de noder och char *

	//2. Anropa denna h�rifr�n sas
	// if linkedlist_get(id) == NULL
	//{
	//fetch from remote service.GetDestinationName(destinationId)
	//	Add to linked list (FRONT)
	//	Ta bort sista om > 10!
	//}
	//else if linkedlist_get(id) != NULL
	//	Move it to FRONT!
	//
}

struct Node {
	int id;
	char *txt;
	struct Node *next;
};
struct Node* head;
void insert(char x) {
	Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->id = x;
	temp->next = NULL;
	if (head != NULL) temp->next = head;
	head = temp;
	

}
void Print() {
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d", temp->id);
		temp = temp->next;
	}
	printf("\n");
}




void main(){
	head = NULL;
	

	SetConsoleOutputCP(1252);

	DisplayMessageEndpoint *endPoint = new DisplayMessageEndpoint();
	while (true)
	{
		DisplayMessageEndpoint::DisplayEntry nextDisplayMessage = endPoint->GetDisplayMessage();
		std::cout << nextDisplayMessage.time << "   " << nextDisplayMessage.newTime
			<< "      " << nextDisplayMessage.track << "  " << GetDestinationFrom(nextDisplayMessage.destinationId)
			<< std::endl;
	}
	int n = 10;
	for (int i = 0; i < n; i++) {
		insert(service.GetDestinationName(destinationId));
	}

	freelist();
}