// This code finds minimum spanning tree in graph.
// We use Boruvka's algorithm
// O(ElogV)
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
		edge.from_--;
		edge.to_--;
		graph.AddEdge(edge);
	} // end of init graph
	file.close();

	//start of the Boruvka's algorithm ->
	std::unordered_set<Edge> mst_tree = graph.BuiltMstByBoruvka();
	long long sum_of_weights = 0;
	for (Edge edge : mst_tree) {
		sum_of_weights += edge.weight_;
	} // counted the sum - answer for owr task

	file.open("kruskal.out", std::fstream::out);
	file << sum_of_weights; // output
	file.close();
}