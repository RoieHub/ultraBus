//
// Created by Roie Malykin on 8/20/2020.
//
/**
 * This interface represents the set of operations applicable on a
 * node (vertex) in a (directional) weighted graph.
 * @author Roie Malykin
 *
 */

#ifndef TAHOBUS_NODE_DATA_H
#include <tuple>
#include <iostream>
#include <string>
#include <stdexcept>
#include "Point_3D.h"


class node_data
        {
                public:
                /**
             * Return the key (id) associated with this node.
             * @return
             */
                virtual int getKey() const = 0 ;

                /** Return the location (of applicable) of this node, if
                 * none return null.
                 *
                 * @return
                 */
                virtual  Point_3D getLocation() const = 0;
                /** Allows changing this node's location.
                 *
                 * @param p - new new location  (position) of this node.
                 */
                virtual void setLocation(Point_3D p) = 0;
                /**
                 * Return the weight associated with this node.
                 * @return
                 */
                virtual double getWeight() const = 0;
                /**
                 * Allows changing this node's weight.
                 * @param w - the new weight
                 */
                virtual void setWeight(double w) = 0;
                /**
                 * return the remark (meta data) associated with this node.
                 * @return
                 */
                virtual std::string getInfo() const= 0;
                /**
                 * Allows changing the remark (meta data) associated with this node.
                 * @param s
                 */
                virtual void setInfo(std::string s) = 0;
                /**
                 * Temporal data (aka color: e,g, white, gray, black)
                 * which can be used be algorithms
                 * @return
                 */
                virtual int getTag() const = 0;
                /**
                 * Allow setting the "tag" value for temporal marking an node - common
                 * practice for marking by algorithms.
                 * @param t - the new value of the tag
                 */
                virtual void setTag(int t) = 0;

        };

#define TAHOBUS_NODE_DATA_H

#endif //TAHOBUS_NODE_DATA_H
