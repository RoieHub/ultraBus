//
// Created by Roie Malykin on 30/09/2020.
//
#include "node_data.h"

class my_node : public node_data
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

            Point_3D _location = Point_3D(0, 0, 0);

            /**
             * Meta data
             */
            std::string _info;


        public:
                // Constructors //
                /**
                 * SImple for testing , without functioning location
                 */
               my_node() : _weight(1) , _tag(0) // Need to finish construction
                {
                   _info =
                };

                // Methods //
                int getKey() const override
                {
                    return this->_id;
                }





        };

