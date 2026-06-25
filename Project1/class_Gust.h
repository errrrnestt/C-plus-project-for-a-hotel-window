#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 👤 CLASS: Guest
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
class Guest {
private:
    char fam[30];
    char name[30];
    int age;
    int id;
    char gender[30];
    char family[30];
    char luggage[30]; // 🧳 Luggage / Baggage
    char nationality[30];

public:
    // 🏗️ Constructor (Commented out)
    //Guest(int get_id, string new_gender, string new_luggage, string new_family, string new_nationality, string new_fam, string new_name, int new_age);
    
    // 📤 Setters
    void set_nationality(string new_nationality);
    void set_family(string new_family);
    void set_luggage(string new_luggage);
    void set_gender(string new_gender);
    void set_name(string new_name);
    void set_fam(string new_fam);
    void set_id(int new_id);
    void set_age(int new_age);

    // 📥 Getters
    string get_nationality();
    string get_family();
    string get_luggage();
    string get_gender();
    string get_name();
    string get_fam();
    int get_id();
    int get_age();
};

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 🗂️ CLASS: list_Guest (Guest collection management)
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
class list_Guest {
private:
    vector <Guest> Guests;

public:
    void Guest_add(Guest new_Guest);
    void Guest_del(int ind);
    int get_size();
    vector <Guest> get_vector();
};

// 🌟 Global/Static instance of the Guests list (Shared across all forms)
static list_Guest Guests; 

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 💾 FILE OPERATIONS: Prototypes for Binary I/O
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨

// 📥 Save the provided list_Guest object into a binary file
void save_to_file_Guest(list_Guest st);  

// 📤 Load data from a binary file and return a populated list_Guest object
list_Guest load_from_file_Guest();