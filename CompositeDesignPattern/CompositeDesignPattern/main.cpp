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

    Component *playButton=new Composite("play");
    Component *stopButton=new Composite("stop");
    Component *pauseButton=new Composite("pause");
    Component *atariButton=new Composite("atari");

    Component *mouseButton=new Leaf("mouse");
    
    playButton->add(stopButton);
    
    stopButton->add(pauseButton);
    stopButton->add(atariButton);
    stopButton->getChildName();
    
    
    playButton->add(mouseButton);
    
    playButton->getChildName();
    
    return 0;
}
