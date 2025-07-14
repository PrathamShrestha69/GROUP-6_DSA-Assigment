# 🔎 Searching and Sorting Algorithms Visualized (C++)

This project demonstrates classic **Searching** and **Sorting** algorithms implemented in **C++**, with runtime measurement and visual explanations to help understand how they work behind the scenes.

---

## 📂 File Structure

```
📁 your-repo-name/
├── main.cpp             # C++ source code
├── README.md            # Project documentation
```

---

## 📦 **Algorithms Included**

✅ Merge Sort
✅ Quick Sort
✅ Binary Search
✅ Exponential Search

---

## 🖥️ **Sorting Algorithm Visualizations**

### 📊 Merge Sort

![Merge Sort Animation](https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif)

**Description:**
Merge Sort divides the array into halves recursively and merges them back in sorted order.

---

### ⚡ Quick Sort

![Quick Sort Animation](https://upload.wikimedia.org/wikipedia/commons/9/9c/Quicksort-example.gif)

**Description:**
Quick Sort selects a pivot, partitions the array into elements less than and greater than the pivot, and sorts recursively.

---

## 🔍 **Searching Algorithm Visualizations**

### 🔎 Binary Search

![Binary Search Animation](https://d18l82el6cdm1i.cloudfront.net/uploads/bePceUMnSG-binary_search_gif.gif)

**Description:**
Binary Search works on sorted arrays, repeatedly checking the middle element and halving the search space each step.

---

### 🚀 Exponential Search

![Exponential Search Animation](https://content.codecademy.com/courses/search-course/visualizations/binarySearch.gif)

**Description:**
Exponential Search quickly finds a range by doubling the index, then applies Binary Search in that range.

---

## 💻 **Program Features**

* Generate random numbers
* Sort using Merge Sort and Quick Sort
* Search using Binary Search and Exponential Search
* Measure runtime in nanoseconds
* Clear and user-friendly console output

---

## 🛠️ **How to Compile & Run**

### 📒 Requirements

* C++ compiler (e.g., `g++`)
* C++11 or newer

### ⚙️ Build & Run

```bash
# Clone the repository
git clone https://github.com/your-username/your-repo-name.git
cd your-repo-name

# Compile
g++ -std=c++11 -o sort_search main.cpp

# Run
./sort_search
```

---

## 📈 **Performance Measurement**

Example output:

```
Merge Sort Time:         6400 ns
Quick Sort Time:         5200 ns
Binary Search Time:       300 ns
Exponential Search Time:  200 ns
```

## 🙌 **Acknowledgments**

Created with ❤️ by **Group 6 LG3 Sept Intake 2024** as part of a learning project on Data Structures & Algorithms in C++.
