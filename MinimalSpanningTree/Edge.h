#pragma once
#include<iostream>
using namespace std;
struct Edge {
	int a;
	int b;
	double weight;
	Edge(int a, int b, double weight);
};
istream& operator >>(istream& is, Edge* e);