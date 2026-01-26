---
layout: page
title: Project — Conway’s Game of Life (C++)
description: A complete C++ implementation of Conway’s Game of Life using dynamic memory, recursion, and file-based inputs.
img: assets/img/life.png
importance: 2
category: projects
pdf: assets/pdf/Life.pdf
showcase: true
---

## Overview

This project consists of a full implementation of Conway’s Game of Life in C++, developed as part of a foundational programming course. The objective was to model and simulate the evolution of a population of cells based on deterministic rules, emphasizing algorithmic thinking, memory management, and clean program structure.

The implementation allows users to load arbitrary initial configurations from text files, simulate successive generations, and observe emergent behaviors such as oscillators, spaceships, and extinction patterns.
All aspects of the project — design, implementation, and documentation — were carried out independently.

---

## Problem Description

Conway’s Game of Life is a zero-player cellular automaton where the evolution of the system depends entirely on its initial configuration. Each cell evolves according to the number of live neighbors, following simple rules of survival, death, and birth.

The main challenge lies in applying these rules simultaneously across the grid while preserving correctness and efficiency, especially when simulating multiple generations.

---

## Technical Approach

The simulation is implemented using:

- Dynamic two-dimensional arrays to represent the game board
- Recursion to generate successive generations
- File I/O (ifstream / ofstream) to load initial configurations and store simulation history
- User-defined functions to ensure modularity and readability
- Careful memory management using new/delete (multi-block allocation)

To guarantee correct rule application, each generation is computed using a temporary copy of the current board, ensuring that updates occur simultaneously rather than sequentially.

---

## Key Features

- Simulation of arbitrary initial configurations loaded from text files
- Support for multiple generations with user-controlled termination
- Persistent logging of generation states to an output file
- Clean separation between logic, visualization, and data handling
- Adjustable grid size through configurable constants

---

## Results

The program successfully reproduces well-known Game of Life behaviors, including:

- Stable configurations

- Periodic oscillators (e.g., blinkers)

- Moving patterns (e.g., spaceships)

- Population extinction scenarios

The use of dynamic memory allows flexible board sizes, while file-based inputs enable easy experimentation with new configurations.

---

## Technologies Used

- C++

- Dynamic memory management

- Recursion

- File I/O

- Algorithmic problem solving

---

## Code

<p>
  <a class="btn btn-outline-primary" href="{{"/assets/code/life.cpp"|relative_url }}" download>
    <i class="fa-solid fa-file-code"></i> Download C++ code
  </a>
</p>

---

## Images

<div class="row">
  <div class="col-sm mt-3 mt-md-0">
    {% include figure.liquid path="assets/img/life2.png" title="Figura 1" class="img-fluid rounded z-depth-1" %}
  </div>
</div>

---

## Download PDF

<a class="btn btn-primary" href="{{ page.pdf | relative_url }}" target="_blank" rel="noopener noreferrer">
  <i class="fa-solid fa-file-pdf"></i> Download PDF (Paper 3)
</a>
