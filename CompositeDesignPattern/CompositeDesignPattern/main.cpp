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
    Component *mainView=new WindowView("MainView");
    Component *subView1=new WindowView("SubView_1");
    
    Component *subView2=new WindowView("SubView_2");

    //2. create leaves
    Component *playButton=new ButtonView("Play");
    Component *stopButton=new ButtonView("Stop");
    
    //3. add children to the root node
    mainView->add(subView1);
    
    mainView->add(subView2);
    
    //4. add children to nodes
    subView1->add(playButton);
    subView1->add(stopButton);
    
    //5. print all children of root node
    mainView->getChildName();
    
    //6. print all children of node
    //subView1->getChildName();
    
    return 0;
}
