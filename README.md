# 🏨 Project: Hotel Management System (C++ / Windows Forms)

Hi there! This is my first serious and large-scale project written in C++. The application is a desktop manager designed for hotel administrators to help them manage rooms, register guests, and keep track of booking history.

## 🎥 Программа в действии (Видео)
![](./assets/demo.gif)

---

## ⚙️ How it Works Under the Hood (Application Logic)

All data management is built around a simple cycle: **"Files 💾 ➡️ Vectors 📊 ➡️ Files 💾"**. Here is how the process looks in short:

1. **App Launch:** First, the app checks if the database files exist on the hard drive.
2. **Loading into Memory:** If the files are found, all the information is immediately loaded into C++ vectors (`std::vector`). Essentially, these vectors act as dynamic arrays and serve as our temporary in-memory database while the program is running.
3. **UI Interaction:** While working with the graphical interface, we add, delete, or edit data directly inside these vectors.
4. **Saving Data:** Whenever data changes or the application is closed, the updated vectors overwrite the files on the disk. The data is stored in a binary or simple text format to prevent accidental manual editing from the outside.

---

## 🛠️ Our Main Architectural "Fix" (Handling Multiple Windows)

The project uses several graphical windows (`MyForm`, `MyForm1`, `MyForm2`). During development, we faced an interesting challenge: passing live vector references or pointers directly between independent Windows Forms in C++/CLI can be incredibly tricky and fragile.

**How we solved it:**
Instead of overcomplicating things with unstable pointers between forms, we came up with a bulletproof and reliable workaround:
* When you perform an action in one window and close it, the vector **immediately saves its state to a file** on the disk.
* When the next window opens, it simply **re-reads the fresh, updated data from that file** back into its own local vector.

Sure, this approach might seem a bit unconventional, but for our first serious project on C++, it turned out to be the most stable solution. It completely eliminated application crashes and prevented any data loss when switching between different windows!

---

## 📂 Project Structure

* **Logic & Entities:**
  * `class_Gust.h` / `Guest_.cpp` — manages hotel guest data.
  * `class_Nomer.h` / `Nomer_.cpp` — handles room categories and types.
  * `class_Room.h` / `Room_.cpp` — logic for managing specific hotel rooms.
* **UI (Windows Forms):**
  * `MyForm.h` — the main dashboard application window.
  * `MyForm1.h` / `MyForm2.h` — additional dialog forms for data entry and generating reports.

---

## 📊 UML Diagram

To visualize the connections between classes and vectors, a UML schema was created. You can view it directly in the repository:

![Project UML Diagram](./assets/UML%20diagram-1.png)

---

## 🚀 How to Run

