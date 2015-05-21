//
//  ButtonView.h
//  WindowViewDesignPattern
//
//  Created by Harold Serrano on 5/19/15.
//  Copyright (c) 2015 cgdemy.com. All rights reserved.
//

#ifndef __WindowViewDesignPattern__ButtonView__
#define __WindowViewDesignPattern__ButtonView__

#include <stdio.h>
#include "Component.h"

class ButtonView:public Component{
    
private:
    
public:
    
    ButtonView(string uName):Component(uName){
        
        name=uName;
        
    };
    
    ~ButtonView(){};
    
};

#endif /* defined(__WindowViewDesignPattern__ButtonView__) */
