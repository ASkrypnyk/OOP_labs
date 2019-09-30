#pragma once

template<typename T>
struct Node {
	T data;
	Node<T>* next;
	Node<T>* prev;
};

template<typename T>
class DoubleLinkedList {
private:
	Node<T>* head;
	Node<T>* tail;
public:
	DoubleLinkedList() :head(nullptr), tail(nullptr) {}
	~DoubleLinkedList();
	void add(T data);
	void print();
	void quicksort();
	void mergesort();
	void insertsort();
};