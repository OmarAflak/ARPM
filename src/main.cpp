#include <iostream>
#include "../include/utils.h"

int main(int argc, char const *argv[]){
	Graph graph;
	if(readGraph("graph.txt", graph)){
		std::cout << "order : " << graph.order << std::endl;
		std::cout << "degree : " << graph.degree << std::endl;
		for(int i=0 ; i<graph.degree ; i++){
			std::cout << graph.vertices[i].i1 << ":" << graph.vertices[i].i2 << " = ";
			std::cout << graph.vertices[i].weight << std::endl;
		}
	}
	return 0;
}
