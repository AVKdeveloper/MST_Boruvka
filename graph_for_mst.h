#ifndef GRAPH_FOR_MST
#define GRAPH_FOR_MST

#include <list>
#include<unordered_set>
#include "disjoint_set_union.h"

struct Edge {
	int from_;
	int to_;
	int weight_;

	bool operator==(const Edge& another_edge) const;
};

class GraphForMst {
	int number_of_vertices_;
	int number_of_edges_;
	std::list<Edge> edges_;
public:
	GraphForMst(const int& number_of_vertices, const int& number_of_edges);
	void AddEdge(const Edge& edge);
	std::unordered_set<Edge> BuiltMstByBoruvka() const;
};

#endif
