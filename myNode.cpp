//
// Created by Roie Malykin on 30/09/2020.
//
#include "node_data.h"

class MyNode : public node_data
        {
        private:
            // Members //

            /**
             * Unique id for every node
             */
            int _id;

            /**
            * Node weight
            */
            double _weight;
            /**
             * _location on a map , for now implemented throught Point 3D , but will probably be changed
             */
            /**
            * tag for collors in graphs
            */
            int _tag;

            Point_3D _location ;

            /**
             * Meta data
             */
            std::string _info;


        public:
                /**
                 * Simple for testing , without functioning location
                 */
               MyNode() : _weight(1) , _tag(0) , _location(0,0,0) ,_info("no info") // Need to finish construction
                {
                   _info = "no info";
                };



                // Methods //

                  /**
                  * Return the key (id) associated with this node.
                  * @return
                  */
                int getKey() const override
                {
                    return _id;
                }

                    /** Return the location (of applicable) of this node, if
                    * none return null.
                    *
                    * @return
                    */
                Point_3D getLocation() const override
                {
                   return this->_location;
                }
                /** Allows changing this node's location.
                *
                * @param p - new new location  (position) of this node.
                */
                void setLocation(Point_3D p) override
                {
                    _location = p;
                }
                /**
                * Return the weight associated with this node.
                * @return
                */
                double getWeight() const override
                {
                    return _weight;
                }
                /**
                 * Allows changing this node's weight.
                 * @param w - the new weight
                 */
                void setWeight(double w) override
                { // For now no problem with negatice weight;
                    _weight = w;
                }
                /**
                 * return the remark (meta data) associated with this node.
                 * @return
                 */
                std::string getInfo() const override
                {
                    return _info;
                }
                /**
                 * Allows changing the remark (meta data) associated with this node.
                * @param s
                */
                void setInfo(std::string s) override
                {
                    _info = s;
                }
                /**
                 * Temporal data (aka color: e,g, white, gray, black)
                 * which can be used be algorithms
                 * @return
                 */
                int getTag() const override
                {
                    return _tag;
                }
                /**
                * Allow setting the "tag" value for temporal marking an node - common
                * practice for marking by algorithms.
                * @param t - the new value of the tag
                */
                void setTag(int t) override
                {
                    _tag = t;
                }










        };

