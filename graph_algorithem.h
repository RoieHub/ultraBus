//
// Created by Roie Malykin on 30/09/2020.
//

#ifndef TAHOBUS_GRAPH_ALGORITHEM_H
#define TAHOBUS_GRAPH_ALGORITHEM_H

/**
 * This interface represents the "regular" Graph Theory algorithms including:
 * 0. clone();
 * 1. init(String file_name);
 * 2. save(String file_name);
 * 3. isConnected();
 * 5. double shortestPathDist(int src, int dest);
 * 6. List<Node> shortestPath(int src, int dest);
 *
 * @author Roie Malykin
 *
 */
#include "node_data.h"
#include"graph.h"
#include <string>
#include <vector>



class graph_algorithms {
        public:

        /**
         * Init this set of algorithms on the parameter - graph.
         * @param g
         */
      virtual void init(graph g) = 0 ;
        /**
         * Compute a deep copy of this graph.
         * @return
         */
        virtual  graph copy() = 0;
        /**
         * Init a graph from file
         * @param file_name
         */
        virtual void init(std::string file_name) = 0;
        /** Saves the graph to a file.
         *
         * @param file_name
         */
        virtual void save(std::string file_name) = 0;
/**
 * Returns true if and only if (iff) there is a valid path from EVREY node to each
 * other node. NOTE: assume directional graph - a valid path (a-->b) does NOT imply a valid path (b-->a).
 * @return
 */
        virtual bool isConnected() = 0;
        /**
         * returns the length of the shortest path between src to dest
         * @param src - start node
         * @param dest - end (target) node
         * @return
         */
        virtual double shortestPathDist(int src, int dest) = 0;
        /**
         * returns the the shortest path between src to dest - as an ordered List of nodes:
         * src--> n1-->n2-->...dest
         * see: https://en.wikipedia.org/wiki/Shortest_path_problem
         * @param src - start node
         * @param dest - end (target) node
         * @return
         */
        virtual std::vector<node_data> shortestPath(int src, int dest) = 0;
        /**
         * computes a relatively short path which visit each node in the targets List.
         * Note: this is NOT the classical traveling salesman problem,
         * as you can visit a node more than once, and there is no need to return to source node -
         * just a simple path going over all nodes in the list.
         * @param targets
         * @return
         */
        virtual std::vector<int> TSP(std::vector<int> targets) = 0;
}

#endif //TAHOBUS_GRAPH_ALGORITHEM_H
