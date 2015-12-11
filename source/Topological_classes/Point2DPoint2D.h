/******************************************************************************
* File: Point2DPoint2D.h
*******************************************************************************
* Purpose: Interface to exploration functions and evaluation functions for
*   the topological relationships between two Point2D objects.This also contains
 *  clustered predicate verification functions
 *
* Description: Interface for Exploration and Evaluation algorithms and functions
 * for Topological Predicate Verification and Determination
 *
* Class: Spatial and Moving Objects Databases (CIS 4930/CIS 6930)
*
* Authors:Group 4 [Michael Kemerer,Tjindra Djundi,Natasha Mandal,Aswini Ramesh,Kyuseo Park]
*
* Date: Fall Semester 2015
******************************************************************************/
#ifndef POINT2DPONT2D_POINT2DPOINT2D_H
#define POINT2DPONT2D_POINT2DPOINT2D_H


#include "planesweep_project/Topic2/Implementation/Point2D.h"
//#include "TopologicalRelationships.h"
#include "TopPredNumberEnums.h"


class Point2DPoint2D {
public:
    Point2DPoint2D(const Point2D &F, const Point2D &G);
    ~Point2DPoint2D();

    bool isTopologicalRelationship(TopPredNumberPoint2DPoint2D predicate);
    TopPredNumberPoint2DPoint2D getTopologicalRelationship();
    
    //    bool overlap();
//    bool disjoint();
//    bool meet();
//    bool equal();
//    bool contains();
//    bool covers();
//    bool coveredBy();
//    bool inside();

private:

    // predicates enum
    enum class vF_Point2DPoint2D_Predicates {
        poi_shared, poi_disjoint
    };

    enum class vG_Point2DPoint2D_Predicates {
        poi_disjoint
    };



    Point2D objF, objG;
    static const int vF_size = 2;
    static const int vG_size = 1;

//    bool predicateSet = false;
    TopPredNumberPoint2DPoint2D  topPredNumberPoint2DPoint2D;

    bool vF[vF_size];
    bool vG[vG_size];

    // getter functions
    bool *getVF();
    bool *getVG();


    // setter functions
    void setObjF(const Point2D &objF) {
        Point2DPoint2D::objF = objF;
    }

    void setObjG(const Point2D &objG) {
        Point2DPoint2D::objG = objG;
    }


    //Exploration function
    void exploreTopoPred();

    //Evaluation function
    void evaluateTopoPred();

    
};


#endif //POINT2DPONT2D_POINT2DPOINT2D_H
