//
// Created by varshith on 14-06-2023.
//

#ifndef RUBIK_S_CUBE_PROJECT_CORNERDBMAKER_H
#define RUBIK_S_CUBE_PROJECT_CORNERDBMAKER_H

#include "CornerPatternDatabase.h"

using namespace std;

class CornerDBMaker {
private:
    string fileName;
    CornerPatternDatabase cornerDB;

public:
    CornerDBMaker(string _fileName);
    CornerDBMaker(string _fileName, uint8_t init_val);

    bool bfsAndStore();
};


#endif //RUBIK_S_CUBE_PROJECT_CORNERDBMAKER_H
