//
//  Documentation.cpp
//  cs2
//
//  Created by Dmytro Gozha on 3/27/25.
//

#include "Documentation.hpp"

//constructors
PersonalDocument::PersonalDocument(string n, string i, double score) : name(n), info(i), AIDetectionScore(score) {}

PersonalDocument::PersonalDocument(const PersonalDocument &PD)
{
    name = PD.name;
    info = PD.info;
    AIDetectionScore = PD.AIDetectionScore;
}

//operator overloadings
std::ostream& operator<<(std::ostream& os, const PersonalDocument& pd)
{
    return os << pd.name << ": " << pd.info;
}

bool PersonalDocument::operator==(const PersonalDocument& pd) const
{
    return this->name == pd.name;
}

//type conversion operators
PersonalDocument::operator double() const
{
    return AIDetectionScore;
}

PersonalDocument::operator string() const
{
    return name;
}
