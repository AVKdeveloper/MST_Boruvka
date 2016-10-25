#include "graph_for_mst.h"

GraphForMst::GraphForMst(const int& number_of_vertices, const int& number_of_edges) {
	number_of_vertices_ = number_of_vertices;
	number_of_edges_ = number_of_edges;
}

void GraphForMst::AddEdge(const Edge& edge) {
	edges_.push_back(edge);
}