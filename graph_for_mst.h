#ifndef GRAPH_FOR_MST
#define GRAPH_FOR_MST

#include <list>

struct Edge {
	int from_;
	int to_;
	int weight_;
};

class GraphForMst {
	int number_of_vertices_;
	int number_of_edges_;
	std::list<Edge> edges_;
public:
	GraphForMst(const int& number_of_vertices, const int& number_of_edges);
	void AddEdge(const Edge& edge);
};

#endif
