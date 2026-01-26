---
layout: page
title: Cyber-Physical Robotic System for Educational Automation
description: Design and integration of a robotic arm and conveyor belt using PLC, Modbus TCP/IP, and IoT for Industry 4.0 education.
img: assets/img/robot.jpg
importance: 2
category: projects
related_publications: true
pdf: assets/pdf/Paper_Proyecto_Mecatronico.pdf
showcase: true
---

## Abstract

This project presents the design and implementation of a **cyber-physical system (CPS)** for educational purposes, integrating a **6-DOF robotic arm**, a **conveyor belt**, and **industrial automation components** within an Industry 4.0 framework.

The system was developed to bridge the gap between theoretical knowledge and hands-on experience in mechatronics, automation, and robotics, enabling students to interact with real industrial technologies such as PLCs, IoT architectures, and industrial communication protocols.

My main contribution focused on **the complete robotic subsystem**, including modeling, control, and integration with the automation and IoT layers.


---

## My Contribution (Robotics Focus)

I was responsible for the **entire robotic component of the system**, covering:

- Modeling and implementation of **direct kinematics** for a 6-degree-of-freedom robotic arm  
- Development of a **Python-based control interface** allowing users to input joint angles and compute end-effector Cartesian coordinates  
- Validation of robotic motion accuracy and workspace behavior  
- Integration of the robotic arm with the conveyor system logic  
- Preparation of the robotic architecture for future extensions (inverse kinematics, task automation)

This work ensured precise positioning, repeatability, and seamless interaction between the robotic arm and the rest of the cyber-physical system.

---

## Technical Details

### Robotic Arm Modeling
- 6-DOF articulated robotic arm
- Direct kinematics implemented to compute end-effector position (x, y, z) from joint angles
- Real-time feedback of robot position for validation and educational visualization

### Control & Software
- Python-based control scripts developed using Thonny
- Manual joint-level control with clear mapping between angles and Cartesian motion
- Architecture designed to support future automation and closed-loop control

### System Integration
- Robotic arm synchronized with conveyor belt operations
- Communication with PLC and IoT layer through **Modbus TCP/IP**
- Designed to operate within a semi-industrial educational environment

---

## Results

- Successful implementation of direct kinematics with accurate end-effector positioning
- Stable robotic motion synchronized with conveyor belt operation
- Full integration of robotics into a larger Industry 4.0-oriented CPS
- Modular design enabling future extensions (inverse kinematics, advanced control, data analytics)

---

## Impact

This project demonstrates how **robotics, industrial automation, and IoT** can be combined into a cost-effective and scalable educational platform.  
It provides students with hands-on exposure to technologies directly aligned with modern industrial environments, reinforcing concepts in robotics, control systems, and cyber-physical architectures.

---

## Images

<div class="row">
  <div class="col-sm mt-3 mt-md-0">
    {% include figure.liquid path="assets/img/r17.png" title="Figura 1" class="img-fluid rounded z-depth-1" %}
  </div>
  <div class="col-sm mt-3 mt-md-0">
    {% include figure.liquid path="assets/img/app.jpg" title="Figura 2" class="img-fluid rounded z-depth-1" %}
  </div>
</div>

---

## Video

<div class="embed-responsive embed-responsive-16by9">
  <iframe class="embed-responsive-item" src="https://www.youtube-nocookie.com/embed/elpPe1eIgIU" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
</div>

---

## Download PDF

<a class="btn btn-primary" href="{{ page.pdf | relative_url }}" target="_blank" rel="noopener noreferrer">
  <i class="fa-solid fa-file-pdf"></i> Download PDF (Paper 1)
</a>

---
