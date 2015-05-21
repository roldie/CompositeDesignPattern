//
//  main.cpp
//  WindowViewDesignPattern
//
//  Created by Harold Serrano on 5/19/15.
//  Copyright (c) 2015 cgdemy.com. All rights reserved.
//

#include <iostream>
#include "Component.h"
#include "WindowView.h"
#include "ButtonView.h"

using namespace std;

int main(int argc, const char * argv[]) {

    //1. create Components
    Component *mainScreen=new WindowView("MainScreen");
    Component *subScreen1=new WindowView("SubScreen_1");
    
    Component *subScreen2=new WindowView("SubScreen_2");

    //2. create leaves
    Component *playButton=new ButtonView("Play");
    Component *stopButton=new ButtonView("Stop");
    
    //3. add children to the root node
    mainScreen->add(subScreen1);
    
    mainScreen->add(subScreen2);
    
    //4. add children to nodes
    subScreen1->add(playButton);
    subScreen1->add(stopButton);
    
    //5. print all children of root node
    mainScreen->getChildName();
    
    //6. print all children of node
    //subScreen1->getChildName();
    
    return 0;
}
