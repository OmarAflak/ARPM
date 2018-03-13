#ifndef GRAPH
#define GRAPH

#include <vector>
#include "Vertex.h"

struct Graph {
	std::vector<Vertex> vertices;
	int order;
	int degree;
};

#endif
