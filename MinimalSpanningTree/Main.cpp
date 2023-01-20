#include<iostream>
#include"Graph.h"
#include"Heap.h"
using namespace std;

//Чтобы ввести граф нужно указать два числа - количество вершин и ребер соответственно
//Потом перечислить ребра - вершина 1, вершина 2, вес. Вершины нумеруются с нуля по порядку
int main() {
	int size, numberOfEdges;
	cin >> size >> numberOfEdges;
	Graph* graph = new Graph(size,numberOfEdges); 
	graph->ReadEdges();
	
	graph->SortEdges();
	//cout <<endl << graph->GetEdges();
	
	vector<Edge*>* minimalTree = graph->Kruskal();
	cout << minimalTree;
}