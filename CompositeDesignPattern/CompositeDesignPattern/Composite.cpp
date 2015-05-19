//
//  Composite.cpp
//  CompositeDesignPattern
//
//  Created by Harold Serrano on 5/19/15.
//  Copyright (c) 2015 cgdemy.com. All rights reserved.
//

#include "Composite.h"

void Composite::add(Component *uComponent){
    
    components.push_back(uComponent);

}

void Composite::remove(Component *uComponent){
    
}