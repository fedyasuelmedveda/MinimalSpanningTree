#include"Heap.h"

ostream& operator<<(ostream& os, vector<Edge*>* v) {
	for (int i = 0; i < v->size();i++) {
		os << (*v)[i]->a << ' ' << (*v)[i]->b << ' ' << (*v)[i]->weight << endl;
	}
	return os;
}

Heap::Heap(vector<Edge*>* array) {
	
	this->size = array->size();
	heap = new vector<Edge*>(4*size);
	for (int i = 0; i < size; i++) {
		(*heap)[i] = (*array)[i];
	}
	for (int i = size / 2; i >= 0; i--) {
		Down(i, size);
	}
	//cout << heap;
}

void Heap::Down(int index, int size) {
	while (index < size / 2) {
		int a = 2 * index + 1;
		int b = 2 * index + 2;
		int newIndex = a;
		if (b < size && (*heap)[b]->weight < (*heap)[a]->weight)
			newIndex = b;
		if ((*heap)[index]->weight <= (*heap)[newIndex]->weight)
			break;
		Edge* e = (*heap)[newIndex];
		(*heap)[newIndex] = (*heap)[index];
		(*heap)[index] = e;
		index = newIndex;
	}
}

Edge* Heap::Min() {
	return (*heap)[0];
}

vector<Edge*>* Heap::Sort() {
	vector<Edge*>* array = new vector<Edge*>;
	for (int i = size-1; i >= 0; i--) {
		array->push_back(Min());
		
		(*heap)[0] = (*heap)[i];
		Down(0,i+1);
		//cout << heap << endl;
	}
	return array;
}