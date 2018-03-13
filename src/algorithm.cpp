#include "../include/algorithm.h"

void kruskal(Graph& graph){
    std::sort(graph.vertices.begin(), graph.vertices.end(), vertexComparator());
    std::vector<Vertex> &vertices = graph.vertices;
    for(int i=0 ; i<vertices.size() ; i++){
        vertices[i].processed = true;
        if(canAdd(graph, vertices[i])){
            vertices[i].processed = false;
        }
    }
}

bool canAdd(const Graph& graph, const Vertex& vertex){
    std::vector<Vertex> vertices = graph.vertices;
    int start = vertex.i1;
    int end = vertex.i2;

    // logic
}
