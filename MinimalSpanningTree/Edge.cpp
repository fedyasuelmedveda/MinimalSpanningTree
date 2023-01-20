#include"Edge.h"
istream& operator >> (istream& is, Edge* e) {
	is >> e->a >> e->b >> e->weight;
	return is;
}
Edge::Edge(int a, int b, double weight) {
	this->a = a;
	this->b = b;
	this->weight = weight;
}