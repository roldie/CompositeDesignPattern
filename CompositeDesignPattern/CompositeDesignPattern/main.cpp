//
//  main.cpp
//  CompositeDesignPattern
//
//  Created by Harold Serrano on 5/19/15.
//  Copyright (c) 2015 cgdemy.com. All rights reserved.
//

#include <iostream>
#include "Component.h"
#include "Composite.h"
#include "Leaf.h"

using namespace std;

int main(int argc, const char * argv[]) {

    //1. create components
    Component *grandPa=new Composite("grandpa");
    Component *father=new Composite("dad");
    
    Component *uncle=new Composite("uncleBob");

    //2. create leaves
    Component *child=new Leaf("junior");
    Component *brother=new Leaf("jack");
    
    //3. add children to the root node
    grandPa->add(father);
    
    grandPa->add(uncle);
    
    //4. add children to nodes
    father->add(child);
    father->add(brother);
    
    //5. print all children of root node
    grandPa->getChildName();
    
    //6. print all children of node
    //father->getChildName();
    
    return 0;
}
