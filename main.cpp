//
//  main.cpp
//  LR1part2
//
//  Created by Роберт Артур Меликян on 26/09/2019.
//  Copyright © 2019 Роберт Артур Меликян. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int x,y,z;
    cout << "x=";cin >> x;
    cout << "y=";cin >> y;
    cout << "z=";cin >> z;
    if ((x < y+z) && (y < x+z) && (z < y+x)){
        cout << "Они могут быть длинами сторон треугольника" << endl;
    }else{
        cout << "Они не могут быть длинами сторон треугольника" << endl;
    }
    return 0;
}
