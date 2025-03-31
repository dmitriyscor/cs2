//
//  Documentation.hpp
//  cs2
//
//  Created by Dmytro Gozha on 3/27/25.
//

#ifndef Documentation_hpp
#define Documentation_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class PersonalDocument
{
    string name;
    string info;
    
public:
    PersonalDocument(string, string);
    PersonalDocument(const PersonalDocument&);
    
    friend std::ostream& operator<<(std::ostream& os, const PersonalDocument&);
    bool operator==(const PersonalDocument&) const;
    
    
};

#endif /* Documentation_hpp */
