#pragma once

class ArrayList {

private:

	int ArraySize;
	int nelts;
	double* array;

	void MakeSpace();

public:
	const static int ArrayIncrement = 2;

	ArrayList();
	~ArrayList();

	void MakeEmpty();
	bool isEmpty();
	int listSize() { return nelts; }
	int Find(double y);
	void Insert(double y, int position);
	void Delete(double y);
	double FindKth(int position);
	double operator[] (int position) { return FindKth(position); }
	void PrintList();

};