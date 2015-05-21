//
//  ComponentInterface.h
//  WindowViewDesignPattern
//
//  Created by Harold Serrano on 5/19/15.
//  Copyright (c) 2015 cgdemy.com. All rights reserved.
//

#ifndef __WindowViewDesignPattern__ComponentInterface__
#define __WindowViewDesignPattern__ComponentInterface__

#include <stdio.h>
#include <string>

using namespace std;

class Component;

class ComponentInterface{

private:
    
public:
    
    ComponentInterface(){};
    
    virtual void add(Component *uComponent)=0;
    virtual void remove(Component *uComponent)=0;
    
    
};

#endif /* defined(__WindowViewDesignPattern__ComponentInterface__) */
