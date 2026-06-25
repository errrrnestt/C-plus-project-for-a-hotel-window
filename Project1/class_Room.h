#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 🔑 CLASS: room (Booking & Allocation)
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
class room
{
private:
    int id;
    int id_nomer;
    char reservation[30]; // 📅 Room reservation status
    char family[30]; 
    char family2[30];
    char payment1[30];
    char payment[30];     // 💳 Payment status / Info

public:
    // 🏗️ Constructor (Commented out)
    //room(int new_id, bool new_payment, string new_sleep_accommodation, string new_family, string new_categorics_of_room, string new_reservation, int new_room_number);
    
    // 📤 Setters
    void set_family(string new_family);
    void set_family2(string new_family2);
    void set_reservation(string new_reservation);
    void set_id_nomer(int new_room_number);
    void set_payment1(string new_payment1);
    void set_id(int new_id);
    void set_payment(string new_payment);
    
    // 📥 Getters
    string get_family();
    int get_id_nomer();
    string get_family2();
    string get_payment1();
    int get_id();
    string get_reservation();
    string get_payment();
};

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 🗂️ CLASS: list_room (Active bookings collection)
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
class list_room {
private:
    vector <room> roomss;

public:
    void room_add(room new_room);
    void room_del(int ind);
    int get_size();
    vector <room> get_vector();
};

// 🌟 Global/Static instance of the rooms list (Shared across all forms)
static list_room roomss; 

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 💾 FILE OPERATIONS: Prototypes for Binary I/O
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨

// 📥 Save the provided list_room object into a binary file
void save_to_file_room(list_room st);  

// 📤 Load data from a binary file and return a populated list_room object
list_room load_from_file_room();