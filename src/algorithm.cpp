#include "../include/algorithm.h"

void kruskal(Graph& graph){
    std::sort(graph.vertices.begin(), graph.vertices.end(), vertexComparator());
    // kruskal implementation
}
