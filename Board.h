/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Board.h
 * Author: s352431
 *
 * Created on September 5, 2018, 10:54 AM
 */

#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "Line.h"
class Board {
public:
    Board();
    Board(const Board& orig);
    virtual ~Board();
    void print();
private:
    vector<Line*> lines;

};

#endif /* BOARD_H */

