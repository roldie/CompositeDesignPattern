//
//  Composite.h
//  CompositeDesignPattern
//
//  Created by Harold Serrano on 5/19/15.
//  Copyright (c) 2015 cgdemy.com. All rights reserved.
//

#ifndef __CompositeDesignPattern__Composite__
#define __CompositeDesignPattern__Composite__

#include <stdio.h>
#include <vector>
#include "Component.h"

using namespace std;

class Composite:public Component{
    
private:
    
public:
    Composite(string uName):Component(uName){
    
        name=uName;
        
    };
    
    ~Composite(){};
    
    void add(Component *uComponent);
    void remove(Component *uComponent);
    
};
#endif /* defined(__CompositeDesignPattern__Composite__) */
