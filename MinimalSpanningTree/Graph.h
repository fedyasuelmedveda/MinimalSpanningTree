#pragma once
#include<vector>
#include"Edge.h"
class Graph {
private:
	int size;
	int numberOfEdges;
	vector<Edge*>* edges;
public:
	Graph(int size,int numberOfEdges);
	void ReadEdges();
	void SortEdges();
	vector<Edge*>* Kruskal();
	vector<Edge*>* GetEdges();
};