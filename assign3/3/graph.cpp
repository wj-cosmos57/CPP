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

int Graph::GetSize() {
    return n;
}

void Graph::PrintShortestPathWeight(int s) {
    int *res = new int[n];
    bool *visit = new bool[n];
    res = vertex[s];
    visit[s] = 1;
    for(int i=0; i<n-2; i++){
        int min=999, temp;
        for(int j=0; j<n; j++)
            if(!visit[j]&&res[j]<min){
                min=res[j];
                temp=j;
            }
        visit[temp]=1;
        for(int k=0; k<n; k++)
            if(res[k]>(res[temp]+vertex[temp][k]))
                res[k]=(res[temp]+vertex[temp][k]);
    }
    for(int i=0; i<n; i++)
        std::cout<<res[i]<<"\n";
}
void Graph::PrintShortestPath(int s){
    int *res = new int[n];
    bool *visit = new bool[n];
    int **path = new int*[n];
    for(int i=0; i<n; i++)
        path[i] = new int[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            path[i][j] = -1;
    }
    for(int i=0; i<n; i++)
        path[i][0] = s;
    for(int i=0; i<n; i++){
        path[i][1] = (vertex[0][i] == 999 ? -1 : i);
    }
    
    res = vertex[s];
    visit[s] = 1;

    for(int i=2; i<n; i++){
        int min = 999, temp;
        for(int j=0; j<n; j++){
            if(!visit[j] && res[j] < min){
                min = res[j];
                temp = j;
            }
        }
        visit[temp] = 1;
        for(int k=0; k<n; k++){
            if(res[k]>(res[temp]+vertex[temp][k])){
                res[k] = (res[temp]+vertex[temp][k]);
                if(k == s) continue;
                for(int l=0; l<n; l++)
                    path[k][l] = path[temp][l];
                for(int l=0; l<n; l++){
                    if(path[k][l] == -1){
                        path[k][l] = k;
                        break;
                    }
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        if(i == s) continue;
        for(int j=0; j<n; j++){
            if(path[i][j] == -1) break;
            std::cout << path[i][j] << " ";
        }
        std::cout << "\n";
    }
}