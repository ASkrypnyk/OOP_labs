#include "ArrayList.h"
using namespace std;

ArrayList::ArrayList() {

	ArraySize = 0;
	nelts = 0;
	array = NULL;
}
ArrayList::~ArrayList() {

	delete[] array;
}

void ArrayList::MakeEmpty()
{
	delete[] array;
	nelts = 0;
	ArraySize = 0;
	array = NULL;
}

bool ArrayList::isEmpty()
{
	return nelts == 0;
}

int ArrayList::Find(double y)
{
	for (int i = 0; i < nelts; i++) {
		if (array[i] == y) {

			
			return i + 1;
		}
	}
	return -1;
}

void ArrayList::Insert(double y, int position)
{

	assert(position >= 1 && position <= nelts + 1);

	
	int ia = position - 1;

	
	MakeSpace();

	
	if (ia < nelts) {
		memmove(&array[ia + 1], &array[ia], (nelts - ia) * sizeof(double));
	}
	array[ia] = y;
	nelts++;
}

void ArrayList::PrintList()
{
	
	for (int i = 0; i < nelts; i++) {
		cout << i + 1 << ". " << array[i] << endl;
	}
}
void ArrayList::MakeSpace()
{
	
	if (nelts < ArraySize) return;

	
	double* tmp;
	tmp = new double[ArraySize + ArrayIncrement];

	
	assert(tmp != NULL);

	
	if (nelts > 0) {
		memcpy(tmp, array, nelts * sizeof(double));
		delete[] array;
	}
	ArraySize += ArrayIncrement;
	array = tmp;
}