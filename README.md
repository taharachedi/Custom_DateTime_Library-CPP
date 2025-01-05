# 📅 Custom Date & Time Library 🕒

> **A comprehensive C++ library for managing and manipulating dates, periods, and strings efficiently.📆**

---

## 🌟 Project Overview

This project provides a **Custom Date & Time Library** in C++ that offers robust functionalities for handling dates, periods, and string manipulations. The library includes three core components: `clsDate`, `clsPeriod`, and `clsString`. It is designed to facilitate complex date and time operations, alongside string handling, making it a powerful tool for time-sensitive and data-driven applications.

---

## ✨ Features

### 🗓️ Date Management (`clsDate`)
- **Date Initialization**:
  - Create date objects from system date, strings, or specific day/month/year values.
- **Date Formatting**:
  - Convert dates to strings with customizable formats.
- **Date Comparison**:
  - Compare two dates to determine order or equality.
- **Leap Year Calculation**:
  - Determine if a year is a leap year.
- **Date Arithmetic**:
  - Add or subtract days, weeks, months, and years.
- **Date Validation**:
  - Check if a date is valid based on calendar rules.
- **Day & Month Information**:
  - Get the short name of days and months.
  - Calculate the number of days in a month or year.

### 📆 Period Management (`clsPeriod`)
- **Period Initialization**:
  - Create periods using start and end dates.
- **Overlap Detection**:
  - Check if two periods overlap and calculate overlap days.
- **Date Inclusion**:
  - Verify if a specific date falls within a period.
- **Period Length Calculation**:
  - Calculate the length of a period in days.

### 📝 String Manipulation (`clsString`)
- **Case Conversion**:
  - Convert strings to uppercase, lowercase, and invert case.
- **Word Operations**:
  - Split and join strings, count words, and print first letters.
- **Character Counting**:
  - Count total, uppercase, lowercase letters, and vowels.
- **Trimming & Formatting**:
  - Trim leading/trailing spaces and remove punctuations.

---

## 🏗️ Code Structure

### 🛠️ Classes and Methods

#### 📅 `clsDate`
- **Properties**:
  - `Day`, `Month`, `Year`: Get or set the date components.
- **Methods**:
  - `DateToString()`, `Get_System_Date()`, `Is_Valid_Date()`, `Is_Leap_Year()`, `Add_Days()`, `Increase_Date_By_One_Day()`, and more.

#### 📆 `clsPeriod`
- **Properties**:
  - `Start_Date`, `End_Date`: Define the period.
- **Methods**:
  - `Is_Overlap_Periods()`, `Period_Length_In_Days()`, `Is_Date_In_Period()`, `Count_Overlap_Days()`, and more.

#### 📝 `clsString`
- **Properties**:
  - `Value`: Get or set the string value.
- **Methods**:
  - `Upper_All_String()`, `Lower_All_String()`, `Invert_All_Letters_Case()`, `Count_Words()`, `Replace_Words()`, and more.

---

## ⚙️ How It Works

### Core Components
1. **Date Operations**:
   - Perform various date manipulations, including arithmetic operations and format conversions.
2. **Period Management**:
   - Handle periods with start and end dates, and perform overlap checks and calculations.
3. **String Manipulation**:
   - Utilize powerful string handling methods for formatting, splitting, and analyzing strings.

---

## 📚 Further Improvements

- **Internationalization**: Add support for different locales and date formats.
- **Enhanced Period Operations**: Include functionalities for calculating business days within periods.
- **Performance Optimization**: Optimize for better performance on large datasets.
- **Extended String Manipulations**: Introduce regex support for more advanced string operations.

---

## ⚙️ Technologies Used

- **Language**: C++ 🖥️
- **Programming Paradigm**: Object-Oriented Programming (OOP) 💻
- **Data Structures**: Vectors for dynamic data management 📊

---

## 🎯 Learning Outcomes

This project demonstrates several key C++ programming concepts:
- ✅ **Object-Oriented Design**: Effective use of classes and encapsulation.
- ✅ **Date & Time Handling**: Comprehensive date manipulation capabilities.
- ✅ **String Manipulation**: Robust string handling techniques.
- ✅ **Control Structures**: Utilization of loops and conditionals for complex logic.

---

## 📜 License

This project is open-source. Use it, modify it, share it! 🎉

Feel free to fork, modify, and use this project as a starting point for your own C++ applications! 🚀

---

## 🤝 Contributing

Contributions are welcome! Please feel free to submit a Pull Request. 🙌

---

## 🏁 Ready to Explore?

### 🚀 How to Use
1. **Include** the headers `clsDate.h`, `clsPeriod.h`, and `clsString.h` in your C++ project.
2. **Instantiate** the respective classes and utilize their methods for date, period, and string manipulations.
3. **Compile** your C++ code and run the application to leverage powerful date-time operations! 🎮

---
