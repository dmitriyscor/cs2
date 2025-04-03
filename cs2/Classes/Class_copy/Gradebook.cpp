// Gradebook.cpp
#include "Gradebook.hpp"

// Конструктор
Gradebook::Gradebook(int id, string name, int numGrades): id(id), name(name), numGrades(numGrades)
{
    grades = new double[numGrades];  // Динамическое выделение памяти для массива оценок
    // Инициализируем все оценки значением DEFAULT_GRADE
    for (int i = 0; i < numGrades; i++)
    {
        grades[i] = DEFAULT_GRADE;  // Инициализация оценок значением по умолчанию
    }
}

// Конструктор копирования
Gradebook::Gradebook(const Gradebook &other): id(other.id), name(other.name), numGrades(other.numGrades)
{
    grades = new double[other.numGrades];  // Выделяем новую память
    for (int i = 0; i < other.numGrades; i++)
    {
        grades[i] = other.grades[i];  // Копируем оценки
    }
}

// Getters
string Gradebook::getName() const
{
    return name;
}

int Gradebook::getId() const
{
    return id;
}

double* Gradebook::getGrades() const
{
    return grades;
}

int Gradebook::getNumGrades() const
{
    return numGrades;
}

// Setters
void Gradebook::setName(string name)
{
    this->name = name;
}

void Gradebook::setId(int id)
{
    this->id = id;
}

void Gradebook::setGrades(double *grades, int numGrades)
{
    // Освобождаем старый массив и выделяем новый
    delete[] this->grades;
    this->numGrades = numGrades;
    this->grades = new double[numGrades];
    for (int i = 0; i < numGrades; i++)
    {
        this->grades[i] = grades[i];
    }
}

// Метод для вывода информации
void Gradebook::printInfo() const
{
    cout << "Student Name: " << name << endl;
    cout << "Student ID: " << id << endl;
    cout << "Grades: ";
    for (int i = 0; i < numGrades; i++)
    {
        cout << grades[i] << " ";
    }
    cout << endl;
}
