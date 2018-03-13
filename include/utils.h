#ifndef UTILS
#define UTILS

#include <vector>
#include <fstream>
#include <sstream>

#include "Graph.h"

struct vertexComparator {
	bool operator()(const Vertex& v1, const Vertex& v2) const {
	    return v1.weight < v2.weight;
	}
};

int toInt(std::string str);
bool readGraph(const char* filename, Graph& graph);
void kruskal(Graph& graph);

#endif
