#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Graph.h"
#include "Vehicle.h"

using namespace std;

void read_files(){
    string line;

    //Vehicles
    ifstream vehicles_file ("./data/Vehicles.txt");

    if(!vehicles_file.is_open()) cout << "Vehicles file was not found" << endl;
    else{
        while( getline(vehicles_file,line) ){
            //TODO
        }
        vehicles_file.close();
    }

    //Nodes
    ifstream nodes_file ("./data/Nodes.txt");

    if(!nodes_file.is_open()) cout << "Nodes file was not found" << endl;
    else{
        while( getline(nodes_file,line) ){
            //TODO
        }
        nodes_file.close();
    }

    //Edges
    ifstream edges_file ("./data/Edges.txt");

    if(!edges_file.is_open()) cout << "Edges file was not found" << endl;
    else{
        while( getline(edges_file,line) ){
            //TODO
        }
        edges_file.close();
    }
}

int main() {
    Graph<string> graph;
    vector<Vehicle> vehicles;

    //read all previous info from files
    read_files();

    //add orders or new info

    //generate the best path

    //print out the best path


    return 0;
}