#include <iostream>

#include "../include/algorithm.h"

int main(int argc, char const *argv[]){
	Graph graph;
	const char* filename = "data/graph";

	if(readGraph(filename, graph)){
		Graph arpm = kruskal(graph, 0);

		std::cout << "order : " << arpm.order << std::endl;
		std::cout << "degree : " << arpm.degree << std::endl;
		for(int i=0 ; i<arpm.degree ; i++){
			std::cout << arpm.vertices[i].node1 << ":" << arpm.vertices[i].node2 << " -> ";
			std::cout << arpm.vertices[i].weight << std::endl;
		}
	}
	else{
		std::cout << "Could not read " << filename << std::endl;
	}
	return 0;
}
