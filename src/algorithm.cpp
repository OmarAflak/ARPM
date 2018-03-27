#include "../include/algorithm.h"

Graph kruskal(Graph& graph, int node){
    std::sort(graph.vertices.begin(), graph.vertices.end(), vertexComparator());
    std::vector<Vertex> &vertices = graph.vertices;
    std::vector<Vertex> tree(graph.order-1);
    std::vector<int> connexe;
    int i=0,j=0,node1=0,node2=0;
    Vertex tmp;

    for(int x=0 ; x<graph.order ; x++){
        connexe.push_back(x);
    }

    while(i<=graph.order && j<graph.degree){
        tmp = vertices[i];
        node1 = connexe[tmp.node1];
        node2 = connexe[tmp.node2];

        if(node1==node2){
            i++;
        }
        else{
            tree[j] = tmp;
            i++;
            j++;

            for(int x=0 ; x<connexe.size() ; x++){
                if(connexe[x]==node1){
                    connexe[x] = node2;
                }
            }
        }
    }

    Graph result;
    result.vertices = tree;
    result.order = graph.order;
    result.degree = tree.size();
    return result;
}
