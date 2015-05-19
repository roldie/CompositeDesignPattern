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

    string name;
    
    vector<Component*> components;
    
    Component(string uName);
    
    ~Component();
    
    Component(const Component& value);
    
    
    Component& operator=(const Component& value);
    
    virtual void add(Component *uComponent){};
    virtual void remove(Component *uComponent){};
    
    void getChildName();


};

#endif /* defined(__CompositeDesignPattern__Component__) */
