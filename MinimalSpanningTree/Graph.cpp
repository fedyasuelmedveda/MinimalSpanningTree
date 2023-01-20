#include "Graph.h"
#include"DSU.h"
Graph::Graph(int size, int numberOfEdges) {
	this->size = size;
	this->numberOfEdges = numberOfEdges;
	this->edges = new vector<Edge*>(numberOfEdges);
}

void Graph::ReadEdges() {
	for (int i = 0; i < numberOfEdges; i++) {
		int a, b;
		double weight;
		cin >> a >> b >> weight;
		(*edges)[i] = new Edge(a, b, weight);
	}
}

//void Graph::SortEdges() {
//	Heap* heap = new Heap(edges);
//	edges = heap.Sort();
//}


vector<Edge*>* Graph::Kruskal() {
	int counter = 0;
	vector<Edge*>* minimalTree = new vector<Edge*>;
	DSU* d = new DSU(this->size);
	
	for (int i = 0; i < numberOfEdges; i++) {
		if (counter == size - 1)
			break;
		
		Edge* e = (*edges)[i];
		if (d->FindSet(e->a) != d->FindSet(e->b)) {
			minimalTree->push_back(e);
			
			d->Union(e->a, e->b);
			counter++;
		}
		
	}
	return minimalTree;
}

vector<Edge*>* Graph::GetEdges() {
	return edges;
}