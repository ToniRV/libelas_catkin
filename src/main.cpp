/*
Copyright 2011. All rights reserved.
Institute of Measurement and Control Systems
Karlsruhe Institute of Technology, Germany

This file is part of libelas.
Authors: Andreas Geiger

Modified by Antoni Rosinol, 2019

libelas is free software; you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation; either version 3 of the License, or any later version.

libelas is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
libelas; if not, write to the Free Software Foundation, Inc., 51 Franklin
Street, Fifth Floor, Boston, MA 02110-1301, USA
*/

// Demo program showing how libelas can be used, try "./elas -h" for help

#include <iostream>
#include "libelas/elas.h"
#include "libelas/image.h"
#include "libelas/main.h"

using namespace std;

int main (int argc, char** argv) {
  // run demo
  if (argc==2 && !strcmp(argv[1],"demo")) {
    elas::process("img/cones_left.pgm",   "img/cones_right.pgm");
    elas::process("img/aloe_left.pgm",    "img/aloe_right.pgm");
    elas::process("img/raindeer_left.pgm","img/raindeer_right.pgm");
    elas::process("img/urban1_left.pgm",  "img/urban1_right.pgm");
    elas::process("img/urban2_left.pgm",  "img/urban2_right.pgm");
    elas::process("img/urban3_left.pgm",  "img/urban3_right.pgm");
    elas::process("img/urban4_left.pgm",  "img/urban4_right.pgm");
    cout << "... done!" << endl;

  // compute disparity from input pair
  } else if (argc==3) {
    elas::process(argv[1],argv[2]);
    cout << "... done!" << endl;

  // display help
  } else {
    cout << endl;
    cout << "ELAS demo program usage: " << endl;
    cout << "./elas demo ................ process all test images (image dir)" << endl;
    cout << "./elas left.pgm right.pgm .. process a single stereo pair" << endl;
    cout << "./elas -h .................. shows this help" << endl;
    cout << endl;
    cout << "Note: All images must be pgm greylevel images. All output" << endl;
    cout << "      disparities will be scaled such that disp_max = 255." << endl;
    cout << endl;
  }

  return 0;
}


