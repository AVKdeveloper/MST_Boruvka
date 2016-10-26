#include "disjoint_set_union.h"

DisjointSetUnion::DisjointSetUnion(const int& number_of_elements) 
	: parent_(number_of_elements) {}

void DisjointSetUnion::MakeSet(const int& element) {
	parent_.at(element) = element;
}

void DisjointSetUnion::UnionSets(const int& element1, const int& element2) {
	
}

int DisjointSetUnion::FindSet(const int& element) const {
	int leader = element; // at the end of this method it will be the leader of the set
	while (leader != parent_.at(leader)) {
		leader = parent_.at(leader);
	}
	return leader;
}

