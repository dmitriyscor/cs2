//
//  Documentation.cpp
//  cs2
//
//  Created by Dmytro Gozha on 3/27/25.
//

#include "Documentation.hpp"

PersonalDocument::PersonalDocument(string n, string i) : name(n), info(i) {}

PersonalDocument::PersonalDocument(const PersonalDocument &PD)
{
    name = PD.name;
    info = PD.info;
}

std::ostream& operator<<(std::ostream& os, const PersonalDocument& pd)
{
    return os << pd.name << ": " << pd.info;
}

bool PersonalDocument::operator==(const PersonalDocument& pd) const
{
    return this->name == pd.name;
}
