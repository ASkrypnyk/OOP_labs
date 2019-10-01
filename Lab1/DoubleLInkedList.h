#pragma once

template<typename T>
class DoubleLinkedList {
private:
	struct Node {
		T data;
		Node* next;
		Node* prev;
	};

	Node* head;
	Node* tail;
public:
	DoubleLinkedList() :head(nullptr), tail(nullptr) {}
	~DoubleLinkedList();
	void add(T data);
	void print();
	void quicksort();
	void mergesort();
	void insertsort();
};