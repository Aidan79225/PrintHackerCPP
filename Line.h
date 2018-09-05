/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Line.h
 * Author: s352431
 *
 * Created on September 5, 2018, 11:49 AM
 */

#ifndef LINE_H
#define LINE_H
#include <iostream>
using namespace std;
class Line {
public:
    Line(const Line& orig);
    Line(int seed);
    virtual ~Line();
    string getString();
    void next();
private:
    string s;
    string prv;
    void resetSelector();
};

#endif /* LINE_H */

