#include<iostream>
#include"Graph.h"
#include"Heap.h"
using namespace std;

//����� ������ ���� ����� ������� ��� ����� - ���������� ������ � ����� ��������������
//����� ����������� ����� - ������� 1, ������� 2, ���. ������� ���������� � ���� �� �������
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