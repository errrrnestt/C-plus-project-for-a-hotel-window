#pragma once
#include <string>
#include <fstream>
#include "class_Gust.h"
#include <iostream>

using namespace std;

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 🏗️ SECTION: Constructor Implementation
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
/*Guest::Guest(int new_id, string new_gender, string new_luggage, string new_family, string new_nationality, string new_fam, string new_name, int new_age)
{
    strcpy(fam, new_fam.c_str());
    strcpy(name, new_name.c_str());
    strcpy(gender, new_gender.c_str());
    strcpy(luggage, new_luggage.c_str());
    strcpy(family, new_family.c_str());
    strcpy(nationality, new_nationality.c_str());
    age = new_age;
    id = new_id;
}*/

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 📥 SECTION: Getters Implementation (Converting char to string)
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨

int Guest::get_age()
{
    return age;
}

int Guest::get_id()
{
    return id;
}

string Guest::get_fam()
{
    string s = fam;
    return s;
}

string Guest::get_luggage()
{
    string s = luggage;
    return s;
}

string Guest::get_family()
{
    string s = family;
    return s;
}

string Guest::get_gender()
{
    string s = gender;
    return s;
}

string Guest::get_name()
{
    string s = name;
    return s;
}

string Guest::get_nationality()
{
    string s = nationality;
    return s;
}

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 📤 SECTION: Setters Implementation (Converting string to char)
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨

void Guest::set_name(string new_name)
{
    strcpy(name, new_name.c_str());
}

void Guest::set_fam(string new_fam)
{
    strcpy(fam, new_fam.c_str());
}

void Guest::set_gender(string new_gender)
{
    strcpy(gender, new_gender.c_str());
}

void Guest::set_luggage(string new_luggage)
{
    strcpy(luggage, new_luggage.c_str());
}

void Guest::set_family(string new_family)
{
    strcpy(family, new_family.c_str());
}

void Guest::set_nationality(string new_nationality)
{
    strcpy(nationality, new_nationality.c_str());
}

void Guest::set_id(int new_id)
{
    id = new_id;
}

void Guest::set_age(int new_age)
{
    age = new_age;
}

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// ⚙️ SECTION: list_Guest Methods Implementation
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨

// ➕ Add a new guest object to the list
void list_Guest::Guest_add(Guest new_Guest)
{
    Guests.push_back(new_Guest);
}

// 📏 Get the total size of the guests list
int list_Guest::get_size()
{
    return Guests.size();
}

// 🗂️ Extract the internal vector from list_Guest to apply Guest methods later
vector <Guest> list_Guest::get_vector()
{
    return Guests;
}

// ❌ Remove a guest from the list by index
void list_Guest::Guest_del(int ind)
{
    Guests.erase(Guests.begin() + ind);
}

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 💾 SECTION: File I/O Operations
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨

// 📥 Save the provided list_Guest object data into a binary file
void save_to_file_Guest(list_Guest st)
{
    ofstream Fout;
    Fout.open("E:\\Guests.dat", ios::binary);

    for (int i = 0; i < st.get_size(); i++)
    {
        Fout.write((char*)&st.get_vector()[i], sizeof(Guest));
    }

    Fout.close();
}

// 📤 Read data from a binary file and return a populated list_Guest object
list_Guest load_from_file_Guest()
{
    ifstream Fin;
    Fin.open("E:\\Guests.dat", ios::binary);

    list_Guest st;

    if (!Fin.is_open())
        return st;

    Guest temp;

    while (!Fin.eof())
    {
        if (Fin.read((char*)&temp, sizeof(Guest)))
            st.Guest_add(temp);
    }

    Fin.close();
    return st;
}