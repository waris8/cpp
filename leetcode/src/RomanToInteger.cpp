/*
 * RomanToInteger.cpp
 *
 *  Created on: 20-Jan-2022
 *      Author: waris
 */

#include "RomanToInteger.h"
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

RomanToInteger::RomanToInteger() {
	// TODO Auto-generated constructor stub
public:
	int romanToInt(String roman) {
		unordered_map<char, int> umap;
		umap['I']=1;
		umap['V']=5;
		umap['X']=10;
		umap['L']=50;
		umap['C']=100;
		umap['D']=500;
		umap['M']=1000;

		int output = umap[roman[0]];
		for(int i=1;i<sizeOf(roman);i++) {
			if(umap[i]>umap[i-1]){
				output = umap[i]-output;
			}
			else{
				output =output + umap[i];
			}
		}
		return output;
	}
}

