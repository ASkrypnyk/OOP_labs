#include <iostream>

#include "DoubleLinkedList.h"
using namespace std;

template<typename T>
DoubleLinkedList<T>:: ~DoubleLinkedList() {
	Node<T>* temp;
	while (head) {
		temp = head;
		head = head->next;
		delete temp;
	}
}

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
		tail = curr;
	}

}

template<typename T>
void DoubleLinkedList<T>::print() {
	Node<T>* curr = new Node;
	while (curr != nullptr) {
		cout << curr->data;
		curr = curr->next;
	}
}