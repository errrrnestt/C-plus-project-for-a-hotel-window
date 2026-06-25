#pragma once
#include <string>
#include <fstream>
#include "class_Nomer.h"
#include <iostream>
#include <cstring>

using namespace std;

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 📥 SECTION: Getters Implementation (Converting char to string)
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨

string nomer::get_categorics_of_room()
{
    string s = categorics_of_room;
    return s;
}

string nomer::get_sleep_accommodation()
{
    string s = sleep_accommodation;
    return s;
}

string nomer::get_payment()
{
    string s = payment;
    return s;
}

int nomer::get_id()
{
    return id;
}

int nomer::get_room_number()
{
    return room_number;
}

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 📤 SECTION: Setters Implementation (Converting string to char)
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨

void nomer::set_payment(string new_payment)
{
    strcpy(payment, new_payment.c_str());
}

void nomer::set_categorics_of_room(string new_categorics_of_room)
{
    strcpy(categorics_of_room, new_categorics_of_room.c_str());
}

void nomer::set_sleep_accommodation(string new_sleep_accommodation)
{
    strcpy(sleep_accommodation, new_sleep_accommodation.c_str());
}

void nomer::set_room_number(int new_room_number)
{
    room_number = new_room_number;
}

void nomer::set_id(int new_id)
{
    id = new_id;
}

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// ⚙️ SECTION: List_nomer Methods Implementation
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨

// ➕ Add a new room (nomer) object to the list
void list_nomer::nomer_add(nomer new_nomer)
{
    nomers.push_back(new_nomer);
}

// 📏 Get the total size of the rooms list
int list_nomer::get_size()
{
    return nomers.size();
}

// 🗂️ Extract vector of rooms from the object
vector <nomer> list_nomer::get_vector()
{
    return nomers;
}

// ❌ Remove a room from the list by index
void list_nomer::nomer_del(int ind)
{
    nomers.erase(nomers.begin() + ind);
}

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 💾 SECTION: File I/O Operations
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨

// 📥 Save the provided list data into a binary file
void save_to_file_nomer(list_nomer st)
{
    ofstream Fout;
    Fout.open("E:\\nomers.dat", ios::binary);

    for (int i = 0; i < st.get_size(); i++)
    {
        Fout.write((char*)&st.get_vector()[i], sizeof(nomer));
    }

    Fout.close();
}

// 📤 Read data from a binary file and return it as a list object
list_nomer load_from_file_nomer()
{
    ifstream Fin;
    Fin.open("E:\\nomers.dat", ios::binary);

    list_nomer st;

    if (!Fin.is_open())
        return st;

    nomer temp;

    while (!Fin.eof())
    {
        if (Fin.read((char*)&temp, sizeof(nomer)))
            st.nomer_add(temp);
    }

    Fin.close();
    return st;
}