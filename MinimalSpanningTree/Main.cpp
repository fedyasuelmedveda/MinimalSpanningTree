#include<iostream>
#include"Graph.h"
using namespace std;

ostream& operator<<(ostream& os, vector<Edge*>* v) {
	for (int i = 0; i < v->size();i++) {
		os << (*v)[i]->a << ' ' << (*v)[i]->b << ' ' << (*v)[i]->weight << endl;
	}
	return os;
}

int main() {
	int size, numberOfEdges;
	cin >> size >> numberOfEdges;
	Graph* graph = new Graph(size,numberOfEdges); 
	graph->ReadEdges();
	//graph->SortEdges();
	
	vector<Edge*>* minimalTree = graph->Kruskal();
	cout << minimalTree;
}