/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: s352431
 *
 * Created on September 4, 2018, 4:58 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>  
#include <chrono>
#include <thread>
#include "Board.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Board* board = new Board();
    board->print();
    return 0;
}

