#include <iostream>

#include "../include/algorithm.h"

int main(int argc, char const *argv[]){
	Graph graph;
	const char* filename = "graph.txt";

	if(readGraph(filename, graph)){
		kruskal(graph);

		std::cout << "order : " << graph.order << std::endl;
		std::cout << "degree : " << graph.degree << std::endl;
		for(int i=0 ; i<graph.degree ; i++){
			std::cout << graph.vertices[i].i1 << ":" << graph.vertices[i].i2 << " = ";
			std::cout << graph.vertices[i].weight << std::endl;
		}
	}
	else{
		std::cout << "Could not read " << filename << std::endl;
	}
	return 0;
}
