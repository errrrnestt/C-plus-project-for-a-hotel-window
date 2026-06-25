# 🏨 Project: Hotel Management System (C++ / Windows Forms)

Hi there! This is my first serious and large-scale project written in C++. The application is a desktop manager designed for hotel administrators to help them manage rooms, register guests, and keep track of booking history.

## 🕰️ Project History

* **100% Pure Human Code:** This project was developed back in **2021** and was fully completed on **April 25, 2021**. Absolutely **zero AI** was used here — just pure brainpower, documentation, and trial and error!
* **The Defense:** I originally defended this project at my educational institution. The package included a slide presentation and a detailed explanatory note (*пояснювальна записка*) written in Ukrainian.
* **Still Got It:** It's honestly amazing that even after all this time, I still perfectly remember how the system, the vectors, and the file-handling work under the hood. This was my first serious milestone in programming, and it holds a special place in my journey!

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

### 🧠 Core Logic
* `class_Gust.h` / `Guest_.cpp` — Manages guest data (Full Name, age, gender, citizenship).
* `class_Nomer.h` / `Nomer_.cpp` — Configures room categories (room type, capacity, payment status).
* `class_Room.h` / `Room_.cpp` — Handles room and booking logic (room numbers, booking status, linking guests to rooms).

### 🖥️ Windows Forms (UI)
* `MyForm.h` / `.cpp` / `.resx` — Main application menu (the primary workspace for the administrator; loads vectors from files on startup).
* `MyForm1.h` / `.cpp` / `.resx` — Form for entering, adding, and editing room and guest information.
* `MyForm2.h` / `.cpp` / `.resx` — Form for data filtering, managing lists, and generating reports.

### ⚙️ System
* `Project1.sln` — Main solution file used to launch the entire project in Visual Studio.
* `Project1.vcxproj` / `.filters` / `.user` — Internal compiler configurations and project file mappings.

---

## 📊 UML Diagram

To visualize the connections between classes and vectors, a UML schema was created. You can view it directly in the repository:

![Project UML Diagram](./assets/UML%20diagram-1.png)

---

## 🚀 How to Run

## 🚀 How to Run

1. Make sure the **C++/CLI Support** component is installed via the **Visual Studio Installer**.
2. Open the `Project1.sln` solution file in Visual Studio.
3. If build errors occur, right-click on the project in the Solution Explorer, select **Retarget solution**, and update the SDK version to match your current system.
4. Set the build configuration to **Debug** and the active solution platform to **x86** (or x64 depending on your environment).
5. Press **F5** (or `Ctrl + F5`) to compile and run the application.
