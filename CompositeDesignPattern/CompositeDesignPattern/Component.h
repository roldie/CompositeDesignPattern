//
//  Component.h
//  CompositeDesignPattern
//
//  Created by Harold Serrano on 5/19/15.
//  Copyright (c) 2015 cgdemy.com. All rights reserved.
//

#ifndef __CompositeDesignPattern__Component__
#define __CompositeDesignPattern__Component__

#include <stdio.h>
#include <iostream>
#include "ComponentInterface.h"
#include <string>
#include <vector>

using namespace std;

class Component:public ComponentInterface{

private:

public:

    //1. name of component
    string name;
    
    //2. vector to store all components
    vector<Component*> components;
    
    //3. constructor
    Component(string uName);
    
    ~Component();
    
    //4. these methods will be implemented by the subclasses
    virtual void add(Component *uComponent){};
    virtual void remove(Component *uComponent){};
    
    //5. function to print all children name
    void getChildName();


};

#endif /* defined(__CompositeDesignPattern__Component__) */
