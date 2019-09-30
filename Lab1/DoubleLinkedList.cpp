#include <iostream>

#include "DoubleLinkedList.h"
using namespace std;

template<typename T>
void DoubleLinkedList<T>::add(T data) {
	Node<T>* curr = new Node;
	curr->data = data;

	if (head == nullptr) {
		curr->prev = nullptr;
		curr->next = nullptr;
		head = curr;
		tail = curr;
	}else {
		curr->prev = tail;
		curr->next = nullptr;
		tail->next = curr;
		tail = temp;
	}

}

template<typename T>





template<typename T>
