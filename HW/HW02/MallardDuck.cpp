//  MallardDuck.cpp
//
//  Created by Sarit Ghildayal on 1/24/15.
//  Copyright (c) 2015 Sarit Ghildayal. All rights reserved.
//

#include <iostream>
#include <string>
#include "HW/HW02/MallardDuck.h"

#include "HW/HW02/Quack.h"

using std::cout;
using std::endl;
using std::string;

MallardDuck::MallardDuck() {}

MallardDuck::~MallardDuck() {}

string MallardDuck::getDescription() {
    string descriptionText = "a mallard duck";
    return descriptionText;
}


