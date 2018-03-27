#ifndef GRAPH
#define GRAPH

#include <iostream>
#include <vector>
#include "Vertex.h"

struct Graph {
	std::vector<Vertex> vertices;
	int order;
	int degree;
};

static std::ostream& operator<<(std::ostream& os, const Graph& graph){
	os << "order: " << graph.order << std::endl;
	os << "degree: " << graph.degree << std::endl;
	for(int i=0 ; i<graph.degree ; i++){
		os << graph.vertices[i].node1 << ":" << graph.vertices[i].node2 << " -> ";
		os << graph.vertices[i].weight << std::endl;
	}
	return os;
}

#endif
