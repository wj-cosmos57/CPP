#include "graph.h"
#include <iostream>
#include <fstream>
#include <string>

void Graph::LoadMatrix(std::string &filename) {
    std::ifstream readFile(filename);
    if(readFile.is_open()) {
        readFile >> n;
        vertex = new int*[n];
        for(int i=0; i<n; i++)
            vertex[i] = new int[n];
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) 
                readFile >> vertex[i][j];
        }
    }
}

void Graph::PrintMatrix() {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            std::cout << vertex[i][j] << " ";
        }
        std::cout << "\n";
    }
}