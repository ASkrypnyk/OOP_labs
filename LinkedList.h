#pragma once

template<typename T>
struct Node {
	T data;
	Node<T>* next;
};

template<typename T>
class List {
private:
	Node<T>* head;
public:
	List() :head(nullptr){}
	~List();
	void add(T data);
	void print();
	void quicksort();
	void mergesort();
	void insertsort();
};