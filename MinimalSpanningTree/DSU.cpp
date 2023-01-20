#include"DSU.h"

DSU::DSU(int size) {
	parents = new vector<int>(size);
	rank = new vector<int>(size);
	for (int i = 0; i < parents->size();i++) {
		MakeSet(i);
	}
}

void DSU::MakeSet(int a) {
	(*parents)[a] = a;
	(*rank)[a] = 0;
}

int DSU::FindSet(int a) {
	if ((*parents)[a] == a)
		return a;
	return (*parents)[a] = FindSet((*parents)[a]);
}

void DSU::Union(int a, int b) {
	a = FindSet(a);
	b = FindSet(b);
	if (a != b) {
		if ((*rank)[a] < (*rank)[b]) 
			(*parents)[a] = b;
		if ((*rank)[b] < (*rank)[a])
			(*parents)[b] = a;
		if((*rank)[b] == (*rank)[a]){
			(*parents)[a] = b;
			(*rank)[b]++;
		}
	}

}