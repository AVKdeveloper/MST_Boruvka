#include <fstream>

int main()
{
	std::fstream file;
	file.open("kruskal.in", std::fstream::in);
	int number_of_vertices, number_of_edges;
	file >> number_of_vertices >> number_of_edges; // getting init info from file


	file.close();


	file.open("kruskal.out", std::fstream::out);
	

	file.close();
}