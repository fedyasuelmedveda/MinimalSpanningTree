#pragma once
#include<vector>
#include"Edge.h"
using namespace std;
class Heap {
private:
	int size;
	vector<Edge*>* heap;
public:
	Heap(vector<Edge*>* edges);
	void Down(int index,int size);
	//void Up(int index);
	Edge* Min();
	//void Add(Edge* e);
	vector<Edge*>* Sort();

};
ostream& operator<<(ostream& os, vector<Edge*>* v);