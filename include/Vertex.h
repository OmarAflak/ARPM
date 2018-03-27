#ifndef VERTEX
#define VERTEX

struct Vertex {
	int node1;
	int node2;
	float weight;
	bool processed;

	Vertex(){
		node1 = 0;
		node2 = 0;
		weight = 0.0f;
		processed = false;
	}
};

#endif
