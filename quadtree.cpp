//
// Created by Farid  on 2018-08-04.
//

#include <iostream>
#include <math.h>
#include <vector>
#include "quadtree.h"


using namespace std;





Quadtree::Quadtree()
{
    root = NULL;

};



Quadtree::Quadtree(string Root_Path){

    STARTING_ROOT = Root_Path;

};

