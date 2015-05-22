//
//  Component.h
//  WindowViewDesignPattern
//
//  Created by Harold Serrano on 5/19/15.
//  Copyright (c) 2015 cgdemy.com. All rights reserved.
//

#ifndef __WindowViewDesignPattern__Component__
#define __WindowViewDesignPattern__Component__

#include <stdio.h>
#include <iostream>
#include "ComponentInterface.h"
#include <string>
#include <vector>

using namespace std;

class Component:public ComponentInterface{

private:

public:

    //1. name of Component
    string name;
    
    //2. vector to store all Children
    vector<Component*> child;
    
    //3. constructor
    Component(string uName);
    
    ~Component();
    
    //4. these methods will be implemented by the subclasses
    virtual void add(Component *uComponent){};
    virtual void remove(Component *uComponent){};
    
    //5. function to print all children name
    void getChildName();


};

#endif /* defined(__WindowViewDesignPattern__Component__) */
