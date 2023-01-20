#pragma once
#include<vector>
using namespace std;
class DSU {
private:
	vector<int>* parents;
	vector<int>* rank;
public:
	DSU(int size);
	void MakeSet(int a);
	int FindSet(int a);
	void Union(int a, int b);
};