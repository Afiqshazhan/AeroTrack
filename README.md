# ✈️ AeroTrack

![Language](https://img.shields.io/badge/language-C%2B%2B-blue)
![Interface](https://img.shields.io/badge/interface-console-lightgrey)
![Status](https://img.shields.io/badge/status-in%20development-orange)

**AeroTrack** is a console-based C++ application for recording, organising, retrieving and managing aircraft maintenance activities and reported technical faults. It is inspired by real-world aviation maintenance operations and aims to replace scattered, error-prone record-keeping with a simple, structured system.

> 🚧 **Project status:** Under active development. This is my first C++ project, built while learning programming fundamentals at UTM. Features are added incrementally and tracked in the [Roadmap](#-roadmap).

---

## 📑 Table of Contents

- [Overview](#-overview)
- [Features](#-features)
- [Tech Stack](#-tech-stack)
- [Getting Started](#-getting-started)
- [Usage](#-usage)
- [Project Structure](#-project-structure)
- [Roadmap](#-roadmap)
- [What I'm Learning](#-what-im-learning)
- [Author](#-author)

---

## 🔎 Overview

In aviation, every inspection, repair and defect must be documented accurately. AeroTrack models this workflow in a lightweight terminal application where a user can:

- Register aircraft in a fleet
- Log maintenance work performed on each aircraft
- Report and track technical faults until they are resolved
- Search and review records quickly

## ✨ Features

Planned core features (see [Roadmap](#-roadmap) for current progress):

| Area | Capability |
|---|---|
| ✈️ Aircraft records | Add, view, update and delete aircraft |
| 🛠️ Maintenance log | Record maintenance activities per aircraft |
| ⚠️ Fault reports | Report technical faults with severity and status |
| 🔍 Search | Find records by aircraft registration |
| 💾 Persistence | Save and load data from file between sessions |
| ✅ Validation | Input checking to prevent invalid or duplicate entries |

## 🧰 Tech Stack

- **Language:** C++ (C++17)
- **Interface:** Command-line / console
- **Storage:** Plain text file (planned)
- **Tools:** VS Code, Git, GitHub, GitHub Desktop

## 🖥️ Usage

The program presents a looping main menu. The layout below is a preview and may change as development continues:

```
===============================
        ✈️  AeroTrack
===============================
1. Add aircraft
2. View all aircraft
3. Search aircraft
4. Log maintenance activity
5. Report technical fault
6. Exit
===============================
Enter your choice:
```

## 🗂️ Project Structure

Current and planned layout:

```
AeroTrack/
├── main.cpp        # Program entry point and main menu
├── README.md       # Project documentation
└── .gitignore      # Ignores compiled files
```

Planned after the code is split into modules:

```
AeroTrack/
├── src/            # .cpp source files
├── include/        # .h header files
├── data/           # Saved records
└── README.md
```

## 🛣️ Roadmap

- [ ] Console menu with input loop
- [ ] Add an aircraft record
- [ ] View all records
- [ ] Search by registration
- [ ] Log maintenance activities
- [ ] Report technical faults
- [ ] Update and delete records
- [ ] Save and load data from file
- [ ] Split code into multiple files
- [ ] Input validation and polish

## 👤 Author

**Afiq Shazhan**
Bachelor of Computer Science (Data Engineering) with Honours, Universiti Teknologi Malaysia (UTM)

- GitHub: [Afiqshazhan](https://github.com/Afiqshazhan)
- LinkedIn: [Afiq Shazhan](https://www.linkedin.com/in/afiq-shazhan-597607355/)

---

⭐ If you find this project interesting, feel free to follow its progress.
