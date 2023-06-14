//
// Created by varshith on 14-06-2023.
//

#ifndef RUBIK_S_CUBE_PROJECT_CORNERPATTERNDATABASE_H
#define RUBIK_S_CUBE_PROJECT_CORNERPATTERNDATABASE_H


#include "../Models/GenericRubiksCube.h"
#include "PatternDatabase.h"
#include "PermutationIndexer.h"
using namespace std;

class CornerPatternDatabase : public PatternDatabase {

    typedef RubiksCube::FACE F;

    PermutationIndexer<8> permIndexer;

public:
    CornerPatternDatabase();
    CornerPatternDatabase(uint8_t init_val);
    uint32_t getDatabaseIndex(const RubiksCube& cube) const;

};


#endif //RUBIK_S_CUBE_PROJECT_CORNERPATTERNDATABASE_H
