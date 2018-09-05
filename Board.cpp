/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Board.cpp
 * Author: s352431
 * 
 * Created on September 5, 2018, 10:54 AM
 */

#include "Board.h"
#include <cstdlib>
#include <iostream>
#include <ctime>  
#include <chrono>
#include <thread>
#include "Line.h"
#include <vector>
#include <ctime>

using namespace std;

Board::Board() {
    for(int i = 0 ; i < 40; i++){
        lines.push_back(new Line(time(0) + i));
    }
}

Board::Board(const Board& orig) {
    
}

Board::~Board() {
}

void Board::print() {
    int j = 0;
    string s;
    
    
    while(true){
        s = "";
        for(int i = 0 ; i < lines.size(); i++){
            Line* line = lines[i];
            s += line->getString();
            line->next();
        }
        system("clear");
        cout<<s<<endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    
    cout<<s;
}

