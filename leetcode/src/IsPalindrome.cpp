/*
 * IsPalindrome.cpp
 *
 *  Created on: 19-Jan-2022
 *      Author: waris
 */

#include "IsPalindrome.h"
#include <iostream>
#include <string>

using namespace std;

IsPalindrome::IsPalindrome() {

public:
	bool isPalin(int x){
		string a = to_string(x);
		int temp = 0;
		while(temp < a.size()/2){
			if(a[temp] == a[a.size()-1-temp]){
				temp++;
			}
			else{
				return false;
			}
		}
		return true;
	}
}
