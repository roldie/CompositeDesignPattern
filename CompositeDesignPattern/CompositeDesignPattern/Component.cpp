//
//  Component.cpp
//  WindowViewDesignPattern
//
//  Created by Harold Serrano on 5/19/15.
//  Copyright (c) 2015 cgdemy.com. All rights reserved.
//

#include "Component.h"


Component::Component(string uName){
    
    name=uName;
}

Component::~Component(){
    
}


void Component::getChildName(){
    
    
    for (int i=0; i<Components.size(); i++) {
        
        cout<<Components.at(i)->name<<endl;
        Components.at(i)->getChildName();
    }
    
    
}
