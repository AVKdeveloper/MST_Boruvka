#include <fstream>
#include "graph_for_mst.h"

int main()
{
	std::fstream file;
	file.open("kruskal.in", std::fstream::in);
	int number_of_vertices, number_of_edges;
	file >> number_of_vertices >> number_of_edges; // getting init info from file
	GraphForMst graph(number_of_vertices, number_of_edges);
	for (int i = 0; i < number_of_edges; ++i) {
		Edge edge;
		file >> edge.from_ >> edge.to_ >> edge.weight_;
		graph.AddEdge(edge);
	}

	file.close();


	file.open("kruskal.out", std::fstream::out);
	

	file.close();
}