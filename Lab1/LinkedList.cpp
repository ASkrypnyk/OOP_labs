#include <iostream>

#include "LinkedList.h"
using namespace std;


template<class T>
void List<T>::add(T t)
{
	if (beginList == nullptr && endList == nullptr) 
	{
		Node<T>* temp = new Node<T>;
		temp->value = t;
		temp->prev = nullptr;
		temp->next = nullptr;
		beginList = temp;
		endList = temp;
		return;
	}

	Node<T>* temp = new Node<T>;
	temp->value = t;
	temp->prev = endList;
	temp->next = nullptr;
	endList->next = temp;
	endList = temp;
}

template<class T>
bool List<T>::delItemByValue(T value)
{
	Node<T>* temp = beginList;
	while (temp) {
		if (temp->value == value)
		{
			if (temp == beginList)
			{
				beginList = beginList->next;
				beginList->prev = nullptr;
				delete temp;
				return true;
			}
			else if (temp == endList)
			{
				endList = endList->prev;
				endList->next = nullptr;
				delete temp;
				return true;
			}
			else
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				delete temp;
				return true;
			}
		}
		temp = temp->next;
	}
	delete temp;
	return false;
}

template<class T>
void List<T>::showList()
{
	Node<T>* temp = beginList;
	while (temp) {
		cout << temp->value << endl;
		temp = temp->next;
	}
	delete temp;
}
