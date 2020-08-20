

//
// Created by Roie Malykin on 8/20/2020.
//
/**
 * This interface represents the set of operations applicable on a
 * directional edge(src,dest) in a (directional) weighted graph.
 */

#ifndef TAHOBUS_EDGE_DATA_H
#define TAHOBUS_EDGE_DATA_H
#include <string>

Class edge_data
{
        public:

        /**
         * The id of the source node of this edge.
         * @return
         */
        virtual int Src() const = 0;

        /**
         * The id of the destination node of this edge
         * @return
         */
        virtual int Dest() const = 0;

        /**
         * @return the weight of this edge (positive value).
         */
        virtual double Weight() const = 0;

        /**
         * return the remark (meta data) associated with this edge.
         * @return
         */
        virtual string info() const = 0;

        /**
         * Allows changing the remark (meta data) associated with this edge.
         * @param s
         */
        virtual void info(string s) = 0;

        /**
         * Temporal data (aka color: e,g, white, gray, black)
         * which can be used be algorithms
         * @return
         */
        virtual int getTag() const = 0 ;

        /**
         * Allow setting the "tag" value for temporal marking an edge - common
         * practice for marking by algorithms.
         * @param t - the new value of the tag
         */
        virtual void setTag(int t) = 0;

};

#endif //TAHOBUS_EDGE_DATA_H
