//
// Created by Farid  on 2018-08-04.
//

#ifndef C_PROJECT_QUADTREE_H
#define C_PROJECT_QUADTREE_H


using namespace std;

#include <iostream>

class Quadtree {
public:


    Quadtree();
    string STARTING_ROOT;

    Quadtree(string Root_Path);


    ~Quadtree();




private:

    class QuadtreeDir {
    public:

        string name;
        vector<QuadtreeDir> * QuadtreeDirs;
        string files[20];


        QuadtreeDir();
        QuadtreeDir(QuadtreeDir* ob);

    };

    QuadtreeDir* root;




};


#endif //C_PROJECT_QUADTREE_H
