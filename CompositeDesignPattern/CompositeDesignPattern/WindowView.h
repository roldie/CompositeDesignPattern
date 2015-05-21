//
//  WindowView.h
//  WindowViewDesignPattern
//
//  Created by Harold Serrano on 5/19/15.
//  Copyright (c) 2015 cgdemy.com. All rights reserved.
//

#ifndef __WindowViewDesignPattern__WindowView__
#define __WindowViewDesignPattern__WindowView__

#include <stdio.h>
#include <vector>
#include "Component.h"

using namespace std;

class WindowView:public Component{
    
private:
    
public:
    
    //1. Constructor
    WindowView(string uName):Component(uName){
    
        name=uName;
        
    };
    
    ~WindowView(){};
    
    //2. add Component as child
    void add(Component *uComponent);
    
    //3. remove child Component
    void remove(Component *uComponent);
    
};
#endif /* defined(__WindowViewDesignPattern__WindowView__) */
