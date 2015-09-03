/* 
 * File:   STRHH.cpp
 * Author: Spencer Marble
 *
 * STRHH - Half of the half
 * http://www.spoj.com/problems/STRHH/
 * 
 * Created on August 31, 2015, 3:58 PM
 */

#include <iostream>
#include <vector>

using namespace std;

int Strhh() {  
    string inString,outString;
    int testCount,strLength,halfLength;  
    cin>>testCount; 
    std::vector<string> inStrs(testCount);
    for(int i = 0; i < testCount;i++){
        cin>>inStrs[i];
    } 
    for(int i = 0; i < testCount; i++){
        strLength = inStrs[i].length();
        halfLength = strLength/2; 
        for( int j = 0; j <= halfLength; j++){
            if(j % 2){
                outString += inStrs[i].at(j-1);
            } 
        } 
        cout<<outString<<endl;
         outString = "";
    }
    return 0;
}

