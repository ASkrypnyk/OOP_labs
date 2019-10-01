#pragma once

template<typename T>


template<typename T>
class LinkedList {
private:
	struct Node {
		T data;
		Node* next;
	};

	Node* head;
public:
	List() :head(nullptr) {}
	~List() {
		Node* temp;
		while (beginList)
		{
			temp = beginList;
			beginList = beginList->next;
			delete temp;
		}
	void add(T data);
	void print();
	void delItemByValue(T value);
	void quicksort();
	void mergesort();
	void insertsort();
};