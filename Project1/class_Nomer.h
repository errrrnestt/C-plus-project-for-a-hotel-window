#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 🏨 CLASS: nomer (Room details)
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
class nomer
{
private:
    // 💬 UA: Категория номера . вип . топ. єконом 
    // ✨ EN: Room category (e.g., VIP, Top, Economy)
    char categorics_of_room[30];   
    
    char room_number;
    int id;
    char sleep_accommodation[30]; // 🛏️ Sleeping accommodations / Beds
    char payment[30];             // 💳 Payment status / Method

public:
    // 🏗️ Constructor (Commented out)
    //room(int new_id, bool new_payment, string new_sleep_accommodation, string new_family, string new_categorics_of_room, string new_reservation, int new_room_number);
    
    // 📤 Setters
    void set_categorics_of_room(string new_categorics_of_room);
    void set_room_number(int new_room_number);
    void set_id(int new_id);
    void set_sleep_accommodation(string new_sleep_accommodation);
    void set_payment(string new_payment);
    
    // 📥 Getters
    string get_categorics_of_room();
    int get_room_number();
    int get_id();
    string get_sleep_accommodation();
    string get_payment();
};

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 🗂️ CLASS: list_nomer (Room collection management)
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
class list_nomer {
private:
    vector <nomer> nomers;

public:
    void nomer_add(nomer new_room);
    void nomer_del(int ind);
    int get_size();
    vector <nomer> get_vector();
};

// 🌟 Global/Static instance of the rooms list (Shared across all forms)
static list_nomer nomers; 

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 💾 FILE OPERATIONS: Prototypes for Binary I/O
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨

// 📥 Save the provided list_nomer object into a binary file
void save_to_file_nomer(list_nomer st);  

// 📤 Load data from a binary file and return a populated list_nomer object
list_nomer load_from_file_nomer();