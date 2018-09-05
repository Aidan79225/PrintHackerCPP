/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Line.cpp
 * Author: s352431
 * 
 * Created on September 5, 2018, 11:49 AM
 */

#include "Line.h"
#include <cstring>
#include <iostream>
#include <ctime>
#include <random>

using namespace std;



std::uniform_int_distribution<> dis(0, 100);

Line::Line(int seed) {
    srand(seed); 
    resetSelector();
}

Line::Line(const Line& orig) {
}

Line::~Line() {
}

string Line::getString(){
    return "\033[32m" + s + "\033[0m" + "\33[5m█\33[0m" + "\033[32m" + prv + "\033[0m\n";
}

void Line::next(){
    if(rand() % 10 > 2){
        s += (rand() % 94 + 32);
        if(prv.length() > 0){
            prv.erase(prv.begin());
        }
    }
    if(s.length() > 160){
        resetSelector();
    }
    
}

void Line::resetSelector(){
    prv = s;
    s = "";
}



