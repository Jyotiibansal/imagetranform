/**
 * @file HSLAPixel.cpp
 * Implementation of the HSLAPixel class for use in with the PNG library.
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#include <cmath>
#include <iostream>
#include "HSLAPixel.h"
using namespace std;

namespace uiuc {
	double HSLAPixel::blue_dist(double hue){
		double result;
		result = (abs(hue - 216) < (abs(hue-360)+ 216) ) ? (abs(hue - 216)) : (abs(hue-360)+ 216) ;
		return result;
	}
	double HSLAPixel::orange_dist(double hue){
		double result;
		result = (abs(hue - 11) < (abs(hue-360)+ 11) ) ? (abs(hue - 11)) : (abs(hue-360)+ 11) ;
		return result;
	}
	
}
